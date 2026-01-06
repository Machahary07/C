// Q) C program to delete a node at the beginning of a doubly linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new node to the end of the list
void addToEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to delete a node at the beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty, nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    if (*head != NULL) {
        (*head)->prev = NULL;
    }
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to print the list
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    // Add n nodes to the list
    printf("Enter the number of nodes to add: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        addToEnd(&head, data);
    }

    // Print the list after adding n nodes
    printList(head);

    // Delete the first node
    deleteAtBeginning(&head);

    // Print the updated list
    printList(head);

    return 0;
}
