#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter array elements:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements are:");
    for(i=0;i<=9;i++)
    {
        printf("\n %d",a[i]);
    }
}