#include <stdio.h>

int main(void){
    int x_ch721 = 123;
    if (x_ch721 < 150) 
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
}