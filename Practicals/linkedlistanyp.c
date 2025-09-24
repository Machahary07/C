// Q) C program to insert a new node at any position of a singly linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at any position
void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position is out of bounds.\n");
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to print the list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, data, position;

    // Insert n nodes at the end
    printf("Enter the number of nodes you want to insert initially: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        insertAtPosition(&head, data, i);
    }

    // Insert a new node at any position
    printf("Enter data for the new node to insert: ");
    scanf("%d", &data);
    printf("Enter position to insert the new node: ");
    scanf("%d", &position);
    insertAtPosition(&head, data, position);

    // Print the list
    printList(head);

    return 0;
}
