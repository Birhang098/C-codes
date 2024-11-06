#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int searchElement(struct Node* head, int element) {
    int position = 1;

    while (head != NULL) {
        if (head->data == element) {
            return position;
        }
        head = head->next;
        position++;
    }

    return -1; // Element not found
}

int main() {
    struct Node* head = createNode(5);
    head->next = createNode(2);

    printf("Original linked list: ");
    printList(head);

    int elementToSearch = 2;
    int position = searchElement(head, elementToSearch);

    if (position != -1) {
        printf("Element %d found at position %d\n", elementToSearch, position);
    } else {
        printf("Element not found in the li");
    }

    // Free the memory allocated for the linked list
    free(head);

    return 0;
}
