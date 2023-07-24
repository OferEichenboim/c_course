#include<stdio.h>
#include<stdlib.h>

/*Functions should be located before main function but you can create a prototype of the function signature to solve it*/
double square(double num_sq);

double cube(double num){    
    return num * num * num;
}

int main(){
    printf("Square Answer: %f\n",square(3.0));
    printf("Cube Answer: %f",cube(3.0));
    return 0;
}


double square(double num_sq){
    double res = num_sq*num_sq;
    return res;
}