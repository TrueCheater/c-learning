#include <stdio.h>

void printMessage();
void passingByValue(int x);
void passingByPointer(int *p);
int multiply(int x, int y);

int main(void){
    // 14.1
    printMessage();

    // 14.2 - done in 14.1

    // 14.3
    int x = 1;
    printf("14.3 - before: %d, ", x);
    passingByValue(5);
    printf("after: %d\n", x);

    // 14.4
    int y = 3;
    printf("14.4 - before: %d, ", y);
    passingByPointer(&y);
    printf("after: %d\n", y);
    
    // 14.5
    int product = multiply(3, 7);
    printf("14.5 - %d\n", product);

}

void printMessage(){
    printf("14.1 - message...\n");
}

void passingByValue(int x){
    x++;
}

void passingByPointer(int *p){
    (*p)++;
}

int multiply(int x, int y){
    return x * y;
}