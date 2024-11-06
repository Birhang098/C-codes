#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the elements of the linked list
void Dis(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to perform bubble sort on the linked list
void bubbleSort(struct Node* head) {
    int swapped, temp;
    struct Node* current;
    struct Node* last = NULL;

    // Check if the list is empty
    if (head == NULL) {
        return;
    }

    do {
        swapped = 0;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                // Swap data if the current element is greater than the next one
                temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}


int main() {
    // Example usage
    struct Node* head = createNode(5);
    head->next = createNode(3);
    head->next->next = createNode(8);
    head->next->next->next = createNode(1);

    printf("Original linked list: ");
    Dis(head);

    bubbleSort(head);

    printf("Sorted linked list: ");
    Dis(head);
    
    return 0;
}
