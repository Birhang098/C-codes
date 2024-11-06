#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }


    newNode->next = temp->next;
    temp->next = newNode;
}

void displayList(struct Node* head) {
    while (head!= NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int data, position, n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertAtPosition(&head, data, i + 1);
    }

    printf("Linked list before insertion: ");
    displayList(head);

    printf("Enter the element to insert: ");
    scanf("%d", &data);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    insertAtPosition(&head, data, position);

    printf("Linked list after insertion: ");
    displayList(head);

    return 0;
}
