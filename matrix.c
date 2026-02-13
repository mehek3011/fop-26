#include<stdio.h>
void main()
{
    int i,a[2][2],j;
    printf("Enter elements:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}