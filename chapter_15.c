#include <stdio.h>

typedef struct MyStruct3 MyStruct3;
typedef struct
{
    char c;
    int x;
    double d;
} MyStruct4;

struct MyStruct1
{
    char c;
    int x;
    double d;
} s1; 

struct MyStruct2
{
    char c;
    int x;
    double d;
};

struct MyStruct3
{
    char c;
    int x;
    double d;
};

struct MyStruct5
{
    char c;
    int x;
    double d;
} s5 = {'s', 7, 59.2};

struct SelfRefSLL   // singly linked list
{
    int x;
    struct SelfRefSLL* next;
};

struct SelfRefDLL   // doubly linked list
{
    int x;
    struct SelfRefDLL* previous;
    struct SelfRefDLL* next;
};

struct SelfRefNode  // binary tree
{
    int x;
    struct SelfRefNode* left;
    struct SelfRefNode* right;
};

void myFunction(struct MyStruct3 myParam){
    printf("Member c has a value of %c\n", myParam.c);
    printf("Member x has a value of %d\n", myParam.x);
    printf("Member d has a value of %f\n", myParam.d);
}

struct MyStruct2 createStruct(char cparam, int xparam, double dparam){
    struct MyStruct2 temps;
    temps.c = cparam;
    temps.x = xparam;
    temps.d = dparam;
    return temps;
}

void printStruct(struct MyStruct2 *myParameter){
    printf("Member c -> %c\n", myParameter->c);
    printf("Member x -> %d\n", myParameter->x);
    printf("Member d -> %f\n", myParameter->d);
}

int main(void){
    printf("Declared a structure of a type: struct MyStruct.\n");
    printf("Variable s of type struct MyStruct declared.\n");
    //struct MyStruct2 s2
    MyStruct3 s3;
    
    MyStruct4 s4 = {'a', 123, 456.789};
    printf("Variable s4 of type struct MyStruct4 declared.\n");
    printf("Member c has a value of %c\n", s4.c);
    printf("Member x has a value of %d\n", s4.x);
    printf("Member d has a value of %f\n", s4.d);

    MyStruct4 ss = {.x = 1, .c = 'c', .d = 4.9};
    printf("Variable ss of type struct MyStruct4 declared.\n");
    printf("Member c has a value of %c\n", ss.c);
    printf("Member x has a value of %d\n", ss.x);
    printf("Member d has a value of %f\n", ss.d);

    printf("Structure initialized.\n");
    printf("Member c has a value of %c\n", s5.c);
    printf("Member x has a value of %d\n", s5.x);
    printf("Member d has a value of %f\n", s5.d);

    printf("s5 before: %c, %d, %f\n", s5.c, s5.x, s5.d);
    s5.c = 'm';
    s5.x = 777;
    s5.d = 1.6;
    printf("s5 after: %c, %d, %f\n", s5.c, s5.x, s5.d);

    MyStruct3 ms1 = {'m', 1, 1.2};
    MyStruct3 ms2;
    ms2 = ms1;
    printf("Values copied: ms2 = %c, %d, %f\n", ms2.c, ms2.x, ms2.d);

    struct MyStruct2 s2 = {'q', 1, 2.3};
    struct MyStruct2 *ps = &s2;
    printf("Member c has a value of %c\n", (*ps).c);
    printf("Member x has a value of %d\n", (*ps).x);
    printf("Member d has a value of %f\n", (*ps).d);
    printf("Member c -> %c\n", ps->c);
    printf("Member x -> %d\n", ps->x);
    printf("Member d -> %f\n", ps->d);

    MyStruct3 myStruct3 = {'w', 4, 56.6};
    myFunction(myStruct3);

    struct MyStruct2 myStruct2;
    myStruct2 = createStruct('e', 8, 99.9999);
    printf("Member c has a value of %c\n", myStruct2.c);
    printf("Member x has a value of %d\n", myStruct2.x);
    printf("Member d has a value of %f\n", myStruct2.d);

    printStruct(&myStruct2);
}
