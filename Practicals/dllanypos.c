// Q) C program to insert a new node at any position of a doubly linked list.

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

// Function to insert a new node at a specific position
void insertAtPosition(struct Node** head, int position, int data) {
    // Validate position (must be >= 1)
    if (position < 1) {
        printf("Invalid position. Position must be >= 1.\n");
        return;
    }
    
    struct Node* newNode = createNode(data);
    if (position == 1) {
        // Insert at the beginning
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Position out of bounds.\n");
            free(newNode);
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
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
    int n, data, position, newData;

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

    // Insert a new node at a specific position
    printf("Enter the position to insert the new node: ");
    scanf("%d", &position);
    printf("Enter the data for the new node: ");
    scanf("%d", &newData);
    insertAtPosition(&head, position, newData);

    // Print the updated list
    printList(head);

    return 0;
}
