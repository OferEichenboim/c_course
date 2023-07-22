#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Welcome to the addition calculator!\n");
    double num1;
    double num2;
    char operation[20];
    printf("Enter the first number: ");
    scanf("%lf",&num1);
    printf("Enter the second number: ");
    scanf("%lf",&num2);
    printf("The result is: %f",num1+num2);
    
    
    return 0;


}