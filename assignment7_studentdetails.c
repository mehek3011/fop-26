#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    struct Student
    {
        char name[50];
        int roll;
        int mrks;
    }
    students[100];
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name, roll number and mrks for student %d: ",i+1);
        scanf("%s%d%d",students[i].name,&students[i].roll,&students[i].mrks);

    }
    printf("\nStudent Details:\n");
    for(i=0;i<n;i++){
        printf("Name: %s, Roll Number: %d, Marks: %d\n",students[i].name,students[i].roll,students[i].mrks);
    }       
}