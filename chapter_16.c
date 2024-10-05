#include <stdio.h>

union MyUnion
{
    char c;
    int x;
    double d;
};

int main(void)
{
    union MyUnion u;
    u.c = 'A';
    printf("The union's char member value: %c\n", u.c);
    u.x = 123;
    printf("The union's int member value: %d\n", u.x);
    u.d = 456.789;
    printf("The union's double member value: %f\n", u.d);

    union MyUnion mu;
    mu.c = 'q';
    mu.x = 1;
    mu.d = 2.3;
    printf("\nThe union's char member value: %c\n", mu.c);
    printf("The union's int member value: %d\n", mu.x);
    printf("The union's double member value: %f\n", mu.d);

}