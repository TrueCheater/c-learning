#include <stdio.h>

int main(void){
    int f = 2 < 1;
    int t = 4 > 3;
    printf("%d\n", f);
    printf("%d\n", t);

    int e = 2 == 2;
    int ne = 2 != 2;
    printf("%d\n", e);
    printf("%d\n", ne);
}