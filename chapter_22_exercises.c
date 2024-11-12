#include <stdio.h>

typedef struct {
    char* name;
    int age;
    double salary;
} TPerson;

typedef struct {
    char name[50];
    int age;
    double salary;
} Person3;

typedef struct {
    char name[50];
    int age;
    double salary;
} TMyStruct;

typedef union{
    char* arr;
    int x;
    double d;
} TMyUnion;

struct Person
{
    char* name;
    int age;
    double salary;
};

double myFunction(const double x, const double y){
    return x * y;
}

void f1(){
    printf("this is a first function\n");
}

void f2(int arg){
    printf("this is a second function with arg: %d\n", arg);
}


int main(void){
    // 22.1 - Structure Definition
    struct Person p;
    p.name = "Bob";
    p.age = 39;
    p.salary = 53953.39;
    printf("22.1 - \tperson name: %s\n\tage: %d\n\tsalary: %.2f\n", p.name, p.age, p.salary);

    // 22.2 - Structure Typedef Alias
    TPerson tp;
    tp.name = "Tom";
    tp.age = 26;
    tp.salary = 52948.11;
    printf("22.2 - \tperson name: %s\n\tage: %d\n\tsalary: %.2f\n", tp.name, tp.age, tp.salary);

    // 22.3 - Structure Initialization
    Person3 p3 = {"Jack Black", 73, 85606.96};
    printf("22.3 - \tperson name: %s\n\tage: %d\n\tsalary: %.2f\n", p3.name, p3.age, p3.salary);

    // 22.4 -  Pointers to Structures
    TMyStruct tms = {"asdfghjkl", 483, 286.910};
    TMyStruct *tmsp = &tms;
    printf("22.4 - char: %s, int: %d, double: %.3f\n", tmsp->name, tmsp->age, tmsp->salary);

    // 22.5 - Unions
    TMyUnion tmu;
    tmu.arr = "qwertyuiop[]";
    printf("22.5 - union value: %s\n", tmu.arr);
    tmu.x = 27;
    printf("22.5 - union value: %d\n", tmu.x);
    tmu.d = 3858.298;
    printf("22.5 - union value: %.3f\n", tmu.d);

    // 22.6 - Const Variables and Pointers
    const int x = 47;   // const variable
    char *const cp = "const pointer";    // const pointer
    int y = 2;
    const int *cpee = &y;  // const pointee
    printf("22.6 - const variable: %d, const pointer: %p, const pointee: %d\n", x, (void *)cp, *cpee);

    // 22.7 - Constant Function Parameters
    double res = myFunction(374, 12.4);
    printf("22.7 - function result: %.3f\n", res);

    // 22.8 - Enums
    enum MyEnum {
        RED,
        GREEN,
        BLUE
    } colour;
    colour = GREEN;

    switch (colour)
    {
    case RED:
        printf("22.8 - colour is red, value: %d\n", colour);
        break;
    case GREEN:
        printf("22.8 - colour is green, value: %d\n", colour);
        break;
    case BLUE:
        printf("22.8 - colour is blue, value: %d\n", colour);
        break;
    default:
        break;
    }

    // 22.9 - Pointers to Functions
    void (*fp1)();
    void (*fp2)(int arg);
    fp1 = f1;
    fp2 = f2;
    printf("22.9 - fp1: ");
    fp1();
    printf("22.9 - fp2: ");
    fp2(6);
}