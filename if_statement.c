#include<stdio.h>
#include<stdlib.h>


int max(int num1, int num2,int num3){    
    int result;
    if(num1>=num2 && num1>=num3){
        result = num1;
    }else if(num2>=num1 && num2>=num3){
        result = num2;
    }else{
        result = num3;
    }
    
    return result;
}

int or_minimum(int num1, int num2, int num3){
    int res;
    if(num1>num2 || num1>num3){
        res = num1;
    }else{
        res = num2;
    }
    return num2;
}

const char* equal_3(int num1, int num2, int num3){
    if(!(num1==3)&&!(num2==3)&&!(num3==3)){
        return "False";
    }else{
        return "True";
    }
}

int main(){
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    printf("The maximal number is: %d\n",max(n1,n2,n3));
    printf("Or operation -not the minimal: %d\n",or_minimum(n1,n2,n3));
    printf("Negation operation -one of the numbers equal to 3?: %s\n",equal_3(n1,n2,n3));
    return 0;
}