#include<stdio.h>
void main()
{
    int fact=1,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of the number:%d",fact);
}