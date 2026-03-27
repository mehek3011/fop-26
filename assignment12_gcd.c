#include<stdio.h>
#include<stdlib.h>

int scd_calc(int num1, int num2){
  //calculate SCD
  int is_scd_found=0;
  int min_value=(num1<num2) ?  num1 : num2;
  int scd=2;
  while(scd <= min_value) {
    if (num1%scd==0 && num2%scd==0){
        is_scd_found=1;
        break;
    }
    scd++;
  }
  if (!is_scd_found){
    scd=1; //if no common divisor is found, scd is 1
  }
  return scd;
}
int gcd_calc(int num1,int num2){
    //calculare gcd
    int is_gcd_found=0;
    int max_value=(num1>num2) ? num1 : num2;
    int gcd=max_value;
    while(gcd>1){
        if(num1%gcd==0 && num2%gcd==0){
            is_gcd_found=1;
            break;
        }
        gcd--;
    }
    if (is_gcd_found){
        gcd=1;//if no common divisor found,gcd is 1
    }
    return gcd;
}

void main(){
    //assignment 12
    //program to perform mathematical operations on two numbers
    //smallest common divisor(SCD)
    //greatest common divisor(GCD)

    //INPUT
    int num1,num2,choice;
    printf("Enter number 1 and number 2: ");
    scanf("%d%d",&num1,&num2);
    num1=mod(abs(num1));
    num2=mod(abs(num2));

    printf("choose operation:\n1.Calculate SCD\n2.Calculate GCD\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            int scd_value=scd_calc(num1,num2);
            printf("Smallest common divisor of %d and %d is: %d",num1,num2,scd_value);
            break;
        case 2:
            int gcd_value=gcd_calc(num1,num2);
            printf("Greatest common divisor of %d and %d is:%d",num1,num2,gcd_value);
            break;
        case 3:
            int scd_value = scd_calc(num1,num2);
            printf("smallest divisor of %d and %d is: %d",num1,num2,scd_value);
            int gcd_value=gcd_calc(num1,num2);
            printf("greatest common divisor of %d and %d is:%d",num1,num2,gcd_value);
            break;
        default:
            printf("Invalid choice");}
}