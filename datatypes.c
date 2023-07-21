#include<stdio.h>
#include<stdlib.h>

int main(){

    int age = 40;
    double gpa = 3.6;
    char let = 'A'; //1 quoatation mark
    char char_name[] = "O_E"; //2 quotation marks
    const int CONST_NUM = 5;
    printf("My name is %s\nMy age is %d\nMy Uni gpa is %f\n",char_name,age,gpa);
    printf("I can print quotation marks with a slash like this: \"\n");
    printf("When I want to print a number I need to set the format specifier - %%d (BTW to print this 1 precentage sign I typed it twice %%%%)\n");
    printf("To print a single char please use the format specifier %%c - like in this char \"%c\"\n",let);
    printf("Use a comment characters to surrouned what you want- /* several lines */\n");
    printf("Use \"const\" before a variable to keep it unchangeable. Changing it will cause a build error (Unsuccessful compilation).\n");

    return 0;
}