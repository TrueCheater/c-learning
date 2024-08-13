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

    float myfloat = 123.456f;   // or 123456e-3f
    printf("The value of a floating-point variable is: %f\n", myfloat); // to print 3 decimal places use %.3f
    double mydouble = 123.456; // or 123456e-3
    printf("The value of a double variable is: %.3f\n", mydouble);
    long double myld = 123456.7891;
    printf("The value of a long double variable is: %.3Lf\n", myld);


    // chapter 5
    int f = 2 < 1;
    int t = 4 > 3;
    printf("%d\n", f);
    printf("%d\n", t);

    int e = 2 == 2;
    int ne = 2 != 2;
    printf("%d\n", e);
    printf("%d\n", ne);


    // chapter 6
    char c_ch6 = 'A';
    int x_ch6;
    x_ch6 = (int)c_ch6; // explicitly convert
    printf("the result is: %d\n", x_ch6);

    int a_ch6 = 10;
    int b_ch6 = 30;
    double di_ch6 = a_ch6 / b_ch6;   // implicitly 
    printf("the result is: %f\n", di_ch6);
    double de_ch6 = (double)a_ch6 / b_ch6;   // explicitly 
    printf("the result is: %f\n", de_ch6);


    // chapter 7
    int x_ch721 = 123;
    if (x < 150) 
    {
        printf("true, the x is less than 150.\n");
    }
    else 
    {
        printf("false, the x is not less than 150.\n");
    }

    switch (x_ch721)
    {
    case 100:
        printf("the value of x is 100.\n");
        break;
    case 123:
        printf("the value of x is 123.\n");
        break;   
    case 456:
        printf("the value of x is 456.\n");
        break; 
    default:
        printf("no matches.\n");
        break;
    }

    int mycounter = 0;
    while (mycounter < 5)
    {
        printf("Hello world from a while loop \n");
        mycounter++;
    }

    int dowhilecounter = 0;
    do
    {
        printf("Hello world from a do-while loop \n");
        dowhilecounter++;
    } while (dowhilecounter < 5);
    
    for (int i = 0; i < 5; i++)
    {
        printf("Hello world from a for loop. Counter value: %d\n", i);
    }


    // chapter 9
    

}
