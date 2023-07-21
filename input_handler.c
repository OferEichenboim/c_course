#include<stdio.h>
#include<stdlib.h>

int main(){
    

    char full_name[20];
    printf("Enter your full name: ");
    fgets(full_name,20,stdin);
    printf("Your full name is %s",full_name);
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); /*A pointer to store the user's age*/
    printf("You are %d years old.\n",age);
    
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); /*A pointer to store the user's gpa*/
    printf("You gpa is: %lf\n",gpa);

    char grade;
    printf("Enter your grade: ");
    // Add a space before %c to consume any leading whitespaces (including newline)
    //It is relevant for this character case as it consumes the \n char after the gpa print line
    scanf(" %c", &grade);
    printf("Your grade is: %c\n", grade);

    return 0;
}