#include<stdio.h>
#include<stdlib.h>
 
void sayHi(char username[], double age);

int main(){
    sayHi("Abby",52.0);
    return 0;
}

void sayHi(char username[], double age){
    printf("Hello User %s your are: %lf",username,age);
}



