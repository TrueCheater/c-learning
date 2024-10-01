#include <stdio.h>

// function declaration
void printMessage(void);
int mySum(int x, int y);
void myFunction(int *x);

int main(void){
    printMessage();

    int myResult = mySum(10, 20);
    printf("result: %d\n", myResult);

    int a = 123;
    printf("before the function call: %d, ", a);
    myFunction(&a);
    printf("after the function call: %d\n", a);
}

// function definition
void printMessage(void){
    printf("Hello world from a function!\n");
}

int mySum(int x, int y){
    return x + y;
}

void myFunction(int *x){
    *x = 456;
}