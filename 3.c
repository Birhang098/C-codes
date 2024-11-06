#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void beginsert(int item);
void printList();
void deleteLastNode();

int main() {
    int choice, item;
    do {
        printf("Enter the item you want to insert: ");
        scanf("%d", &item);
        beginsert(item);
        printf("Press 0 to insert more: ");
        scanf("%d", &choice);
    } while (choice == 0);

    printf("Linked List before deletion: ");
    printList();

    deleteLastNode();

    printf("Linked List after deleting the last node: ");
    printList();

    return 0;
}

void beginsert(int item) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Overflow: Unable to allocate memory\n");
    } else {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Node inserted\n");
    }
}

void printList() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void deleteLastNode() {
    if (head == NULL) {
        printf("Underflow: Linked list is empty\n");
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) {
        // Only one node in the list
        free(head);
        head = NULL;
    } else {
        prev->next = NULL;
        free(temp);
    }

    printf("Last node deleted\n");
}
