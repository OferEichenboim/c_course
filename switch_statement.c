#include<stdio.h>
#include<stdlib.h>

int main(){
    char grade;
    printf("Please Enter your grade (A-F): ");
    scanf("%c",&grade);
    switch(grade){
        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did OK!");
            break;
        case 'C':
            printf("You did fine!");
            break;
        case 'D':
            printf("You shuold improve!");
            break;
        case 'E':
            printf("You did poorly!");
            break;
        case 'F':
            printf("You Failed!");
            break;
        default:
            printf("Invalid grade");
    }

}