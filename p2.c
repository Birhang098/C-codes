#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
void astp(struct Node** head,int data,int position)
{
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=data;

    if(position==1)
    {
        newNode->next=*head;
        *head=newNode;
    }
    
}






void printlist(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
}