// Q) c program to traverse a singly linked list.

#include <stdio.h>
#include <stdlib.h>

// Define the node structure
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

// Function to traverse the linked list
void traverseList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int n, data;
    struct Node *head = NULL, *tail = NULL;

    // User input for number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create and link nodes based on user input
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        struct Node* newNode = createNode(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Traverse the linked list
    printf("Linked list: ");
    traverseList(head);

    return 0;
}
