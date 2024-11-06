#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node 
{
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int newData) {
    // Create a new node
    struct Node* newNode =(struct Node *)malloc(sizeof(struct Node));

    // Set data for the new node
    newNode->data = newData;

    // Set the next of the new node to the current head
    newNode->next = *head;

    // Set the head to the new node
    *head = newNode;
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert elements at the beginning of the linked list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 1);

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    return 0;
}
