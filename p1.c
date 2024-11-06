#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,x,pos;
    printf("enter the siz");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    scanf("%d",&pos);
    arr[pos-1]=x;



    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}