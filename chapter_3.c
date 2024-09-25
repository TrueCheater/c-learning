#include <stdio.h>

int main(void){
    char mychar;
    mychar = 'a';   // or mychar = 97 are the same
    printf("%c\n", mychar);
    printf("%d\n", mychar);
    printf("the size of a character object is %zi byte(s).\n", sizeof(mychar));

    unsigned char unmychar = 255;   // can hold only positive values, max value is 255
    printf("the value of mychar is: %d.\n", unmychar);

    int x = 10;     // decimal
    int y = 012;    // octal
    int z = 0xA;    // hexadecimal
    printf("Decimal: %d; Octal: %o; Hexadecimal: %X\n", x, x, x);
    unsigned int ux = 123456789u;
    printf("The value of an unsigned integer is: %u\n", ux);
    short sx = 1234;    // the same as 'short int sx'
    printf("The value of a short integer is: %d\n", sx);
    long lx = 123456789l;    // the same as 'long int lx'
    printf("The value of a long integer is: %ld\n", lx);
    unsigned short usx = 1234u;
    printf("The value of an unsigned short integer is: %hu\n", usx);
    unsigned long ulx = 123456789ul;
    printf("The value of an unsigned long integer is: %lu\n", ulx);
    long long llx = 123456789ll;
    printf("The value of a long long integer is: %lld\n", llx);
    unsigned long long ullx = 123456789llu;
    printf("The value of an unsigned long long integer is: %llu\n", ullx);

    float myfloat = 123.456f;   // or 123456e-3f
    printf("The value of a floating-point variable is: %f\n", myfloat); // to print 3 decimal places use %.3f
    double mydouble = 123.456; // or 123456e-3
    printf("The value of a double variable is: %.3f\n", mydouble);
    long double myld = 123456.7891;
    printf("The value of a long double variable is: %.3Lf\n", myld);
}