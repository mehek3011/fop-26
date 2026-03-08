#include<stdio.h>
void main()
{
    char str[100];
    int length;
    printf("\nEnter a string: ");
    gets(str);
    length=strlen(str);
    printf("\nLength of the string is: %d",length);
}