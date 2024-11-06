#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at a specific position in the linked list
void insertAtPosition(struct Node** head, int data, int position) {
    // Allocate memory for a new node
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    // If the position is 1, insert at the beginning
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    // Traverse the list to find the node at position-1
    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Insert the new node at the specified position
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display the elements of the linked list
void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Initialize an empty linked list
    int data, position, n;

    // Take user input for the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Take user input for the elements and insert them into the linked list
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertAtPosition(&head, data, i + 1);
    }

    // Display the linked list before insertion
    printf("Linked list before insertion: ");
    displayList(head);

    // Take user input for the element and position to insert
    printf("Enter the element to insert: ");
    scanf("%d", &data);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Insert the element at the specified position
    insertAtPosition(&head, data, position);

    // Display the linked list after insertion
    printf("Linked list after insertion: ");
    displayList(head);

    return 0;
}
