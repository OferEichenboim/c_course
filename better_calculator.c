#include<stdio.h>
#include<stdlib.h>

double add(double num1,double num2){
    double res;
    res = num1 + num2;
    return res;
}

double subtract(double num1,double num2){
    double res;
    res = num1 - num2;
    return res;
}

double devide(double num1,double num2){
    double res;
    res = num1/num2;
    return res;
}

double multiply(double num1,double num2){
    double res;
    res = num1 * num2;
    return res;
}

double calculate(double num1, double num2, char op){
    //Notice the single qoutes of the operators or it will consied it as a pointer to a string +/0 were the /0 is the null terminator
    if(op == '+'){
        return add(num1,num2);
    }else if(op == '-'){
        return subtract(num1,num2);
    }else if(op == '*'){
        return multiply(num1,num2);
    }else if(op == '/'){
        return devide(num1,num2);
    }

}

int main(){
    double num1;
    double num2;
    char operation;
    double result;
    printf("Enter first number: ");
    scanf("%lf",&num1);
    printf("Enter second number: ");
    scanf("%lf",&num2);
    printf("Enter operator from (+,-,*,/): ");
    scanf(" %c",&operation);// don't forget the space before %c1
    result = calculate(num1,num2,operation);
    printf("%f %c %f = %f",num1,operation,num2,result);
    return 0;
}