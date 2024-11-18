#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheaderfile.h"

#define MAX 100
#define ARRAY_ELEMENTS 3
#define MY_MAX 485
#define MY_FLAG 123
#define MY_MACRO
#define MY_SUM(x, y) ((x) + (y))

void myFunction()
{
    printf("This function's name is: %s\n", __func__);
}

int main(void)
{
    printf("Included several standard-library headers.\n");
    printf("Included one standard-library header and one user-defined header file.\n");
    printf("Symbolic identifier MAX is: %d\n", MAX);

    int arr[ARRAY_ELEMENTS];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for (int i = 0; i < ARRAY_ELEMENTS; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int x = MY_MAX;
    printf("The value is: %d\n", x);
#undef MY_MAX
    printf("Macro undefined. The name MY_MAX no longer exists.\n");
#define MY_MAX 846
    printf("Macro MY_MAX redefined and exists again.\n");
    x = MY_MAX;
    printf("The value is: %d\n", x);
    
#if MY_FLAG < 123
    printf("This portion of the code if MY_FLAG < 123\n");
    printf("will not get compiled.\n");
#elif MY_FLAG == 123
    printf("This portion of the code if MY_FLAG == 123\n");
    printf("will get compiled.\n");
#else
    printf("This portion of the code if MY_FLAG > 123\n");
    printf("will also be skipped.\n");
#endif

#ifdef MY_MACRO
    printf("This portion of the code if MY_MACRO defined\n");
    printf("will get compiled.\n");
#endif

#ifdef NON_EXISTING_MACRO
    printf("This portion of the code if NON_EXISTING_MACRO defined\n");
    printf("will not get compiled.\n");
#endif

#ifndef MY_MACRO
    printf("This portion of the code if MY_MACRO is not defined\n");
    printf("will not get compiled.\n");
#endif

#ifndef NON_EXISTING_MACRO
    printf("This portion of the code if NON_EXISTING_MACRO is not defined\n");
    printf("will get compiled.\n");
#endif

#ifndef MY_NEW_MACRO
#define MY_NEW_MACRO
    printf("New macro defined.\n");
#endif
    
    printf("The current source code line is: %d\n", __LINE__);
    printf("This statement is on line: %d\n", __LINE__);
    printf("This source code file is called: %s\n", __FILE__);
    printf("Current time: %s\n", __TIME__);
    printf("Current date: %s\n", __DATE__);
    printf("C Standard version: %ld\n", __STDC_VERSION__);

    myFunction();

    int mysum = MY_SUM(73, 2859);
    printf("The result of int sum is: %d\n", mysum);
    double mydoublesum = MY_SUM(9375.374, 2497.489);
    printf("The result of double sum is: %.3lf\n", mydoublesum);
}