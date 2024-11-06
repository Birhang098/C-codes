#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at a specific position
void insertAtPosition(struct Node** head_ref, int position, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (position == 0) {
        // Insert at the beginning
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    // Traverse to the position just before the desired position
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        // If the position is greater than the number of elements in the list
        printf("Invalid position\n");
        return;
    }

    // Insert the new node at the specified position
    new_node->next = temp->next;
    temp->next = new_node;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Driver program
int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insertAtPosition(&head, 0, 1);
    insertAtPosition(&head, 1, 2);
    insertAtPosition(&head, 2, 3);

    printf("Linked List: ");
    printList(head);

    // Insert an element at position 1
    insertAtPosition(&head, 1, 4);

    printf("Linked List after insertion: ");
    printList(head);

    return 0;
}
