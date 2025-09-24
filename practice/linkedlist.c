#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Append node at end
void append(Node** head, int data) {
    Node* new_node = createNode(data);
    
    if (!*head) {
        *head = new_node;
        return;
    }
    
    Node* current = *head;
    while (current->next)
        current = current->next;
    current->next = new_node;
}

// Prepend node at beginning
void prepend(Node** head, int data) {
    Node* new_node = createNode(data);
    new_node->next = *head;
    *head = new_node;
}

// Delete node by value
void deleteNode(Node** head, int key) {
    if (!*head) return;
    
    // Delete head if it matches
    if ((*head)->data == key) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    Node* current = *head;
    while (current->next && current->next->data != key)
        current = current->next;
    
    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

// Search for a value
int search(Node* head, int key) {
    while (head) {
        if (head->data == key) return 1;
        head = head->next;
    }
    return 0;
}

// Display the list
void display(Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Free all nodes
void freeList(Node** head) {
    while (*head) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    printf("After appending 10, 20, 30:\n");
    display(head);

    prepend(&head, 5);
    printf("After prepending 5:\n");
    display(head);

    deleteNode(&head, 20);
    printf("After deleting 20:\n");
    display(head);

    printf("Search 30: %s\n", search(head, 30) ? "Found" : "Not Found");
    printf("Search 100: %s\n", search(head, 100) ? "Found" : "Not Found");

    freeList(&head);
    return 0;
}