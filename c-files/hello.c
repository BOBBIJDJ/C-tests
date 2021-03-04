#include <stdio.h>

int main(){

    //variable definition
    float a;
    float b;
    float result;

    printf("inserisci il primo numero:\n");
    scanf("%f",&a); //scanning for input to put in variable "a"

    printf("inserisci il secondo numero:\n");
    scanf("%f",&b); //scanning for te input to put in "b"

    //result value definition

    result = a + b;

    //printing the final result
    printf("the result is: %.2f + %.2f = %.2f", a, b, result);
    //%.2f = %f stands for float and .2 define how many numbers there will be on the right behind the dot 

    return 0;
}
