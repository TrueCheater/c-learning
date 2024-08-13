#include <stdio.h>

int main(void){
    // 8.1
    int n1 = 15;
    int n2 = 94;
    int n3 = n1 + n2;
    printf("sum = %d\n", n3);

    // 8.2
    int d1 = 10;
    int d2 = 4;
    int d3 = d1 / d2;
    printf("int division = %d\n", d3);

    // 8.3
    int i1 = 10;
    int i2 = 8;
    double i3 = (double) i1 / i2;
    printf("floating-point division = %0.3f\n", i3);

    // 8.4
    int a = 10;
    int b = 12;
    if (a == b)
    {
        printf("equal\n");
    } 
    else
    {
        printf("not equal\n");
    }

    // 8.5
    int c = 87;
    if (c > 50 && c < 100)
    {
        printf("true, >50 and <100\n");
    }
    else
    {
        printf("false\n");
    }
    
    // 8.6
    int value = 2;
    switch (value)
    {
    case 1:
        printf("value is 1, in [1..3]\n");
        break;
    case 2:
        printf("value is 2, in [1..3]\n");
        break;
    case 3:
        printf("value is 3, in [1..3]\n");
        break;
    default:
        printf("value is not in [1..3]\n");
        break;
    }    
    
    // 8.7
    printf("for-loop: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }
    
    printf("\nwhile-loop: ");
    int counter = 0;
    while (counter < 5)
    {
        printf("%d ", counter);
        counter++;
    }
    
}