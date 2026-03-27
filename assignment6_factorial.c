#include<stdio.h>
int fact(int num) {
    if(num==0)
    return 1;
    else
    return num*fact(num-1);
}       
void main() {
    int n,f=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("\n%d",f);
}