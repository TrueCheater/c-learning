#include <stdio.h>

#define MY_MACRO 18
#define MY_CONDITIONAL_MACRO 
#define LESSER(x, y) (((x) < (y)) ? (x) : (y))
#define GREATER(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
    // 24.1
    printf("24.1 - defined macro: %d\n", MY_MACRO);
#undef MY_MACRO
    printf("24.1 - macro undefined\n");

    // 24.2
#ifdef  MY_CONDITIONAL_MACRO
    printf("24.2 - MY_CONDITIONAL_MACRO exists\n");
#endif 

    // 24.3
    printf("24.3 - line number is %d\n", __LINE__);
    printf("24.3 - file name is %s\n", __FILE__);
    printf("24.3 - date is %s\n", __DATE__);
    printf("24.3 - function name is %s\n", __func__);
    printf("24.3 - current C standard used is %d\n", __STDC_VERSION__);

    // 24.4
    int lesser = LESSER(5, 7);
    printf("24.4 - lesser value is %d\n", lesser);
    int greater = GREATER(8, 26);
    printf("24.4 - greater value is %d\n", greater);
}