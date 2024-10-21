#include <stdio.h>

typedef int MyInt;
typedef char* MyString;
typedef struct
{
    char c;
    int x;
    double d;
} MyStruct;


int main(void){
    MyInt x = 123;
    printf("The value is: %d\n", x);
    MyString s = "Hello World!";
    printf("The value is: %s\n", s);
    MyStruct str;
    printf("Variable s of type MyStruct declared\n");
}