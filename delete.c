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

void deleteLastNode(struct Node* head) {
    struct Node* secondLast = head;
    while (secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }
    secondLast->next = NULL;
}

int main() {
    struct Node* head = createNode(5);
    head->next = createNode(2);
    head->next->next = createNode(2);
    head->next->next->next = createNode(2);
    head->next->next->next->next = createNode(2);

    printf("Original linked list: ");
    printList(head);

    deleteLastNode(head);

    printf("Linked list after deleting the last node: ");
    printList(head);

    // Free the memory allocated for the linked list
    free(head);

    return 0;
}
