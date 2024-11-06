#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node*next;
};
struct Node* createlist(int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;

}
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node*head=createlist(5);
    head->next=createlist(2);
    //bubblesort(head);
    printList(head);


}