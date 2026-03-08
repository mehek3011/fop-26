#include<stdio.h>
void main()
{
    char str[100],str1[100];

    printf("\nEnter the first string: ");
    gets(str);

    printf("\nEnter trhe second string: ");
    gets(str1);

    strcat(str,str1);
    printf("\nThe concatinated string is: %s",str);
}