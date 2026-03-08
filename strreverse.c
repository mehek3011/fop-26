#include<stdio.h>
void main()
{
    char str[100],str1[100];
    int len,i;

    printf("\nEnter the string: ");
    gets(str);

    len=strlen(str);

    printf("\nThe reversed string is: ");
    for(i=len+1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
