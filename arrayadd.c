#include<stdio.h>
void main()
{
    int a[3],b[3],c[3],i;
    printf("Enter the elements for first array:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements for the secnod array:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("The additopn is:");
    for(i=0;i<3;i++)
    {
        printf(" \n%d",c[i]); 
    }
}