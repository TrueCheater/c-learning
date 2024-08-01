#include <stdio.h>

int main(void){
    printf("Hello world!\nA new line!\n");

    // chapter 3
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

    
}
