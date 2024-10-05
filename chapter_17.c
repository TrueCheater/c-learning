#include <stdio.h>

int main(void)
{
    int x = 123;
    int result;

    if (x > 20)
    {
        result = 456;
    }
    else
    {
        result = 789;
    }
    printf("if-else result = %d\n", result);

    // or

    result = (x > 20) ? 456 : 789;
    printf("ternary operator result = %d\n", result);

    // or
    printf("printf & ternary result = %d\n", (x > 20) ? 456 : 789);
}


