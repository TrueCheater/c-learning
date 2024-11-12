#include <stdio.h>

void myFunction(){
    printf("=== hello from myFunction ===\n");
}

void functionWithArgs(char *arg1, int arg2){
    printf("%s %d\n", arg1, arg2);
}

int main(void){
    void (*fp)();
    fp = myFunction;
    fp();

    void (*fwap)(char *, int);
    fwap = functionWithArgs;
    fwap("this is arg1, arg2: ", 15);
}