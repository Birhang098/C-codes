#include<stdio.h>
int main()
{
    int array[100];
    int i,n,x,pos;
    printf("enter the number of element in the array : \n");
    n=5;
    //scanf("%d",&n);
    printf("entre the elements in the array :\n");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&array[i]);
    }
    printf("input elements are:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }
    //printf("\nenter the new element to be inserted: ");
    //scanf("%d",&x);

    printf("\nenter the position you wnat to insert : ");
    scanf("%d",&pos);
    array[pos-1]=x;
    
    
    //printf("\nenter the position ofn the element in the array you want delet ");
    //scanf("%d",&pos);
    //for(i=pos-1;i<n-1;i++)
    //{
    //    array[i]=array[i+1];
    //}
    //n--;

    //printf("\nreverse order\n");
    //for(i=n-1;i>=0;i--)
    //{
    //    printf("%d",array[i]);
    //}


    printf("\narray after executing");
    for(i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }


    printf("\n");
    return 0;
}