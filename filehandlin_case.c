#include<stdio.h>
void main()
{
    FILE *source;
    //opening and closing a file
    source=fopen("source.txt","w");
    fclose(source);
    printf("The file is closed successfully.");

    //fread function
    int i=12;
    float x=2.546;
    char ch='m';
    source=fopen("source.txt","w");
    fprintf(source)
}