#include <stdio.h>

int main(void){
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
}