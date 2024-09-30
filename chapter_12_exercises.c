#include <stdio.h>

int main(void){
    // 12.1
    char charArray[] = "char array here";
    printf("12.1 - %s\n", charArray);

    // 12.2
    int intArray[] = {1, 2, 3, 4, 5};
    intArray[0] = 11;
    intArray[4] = 55;
    printf("12.2 - ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", intArray[i]);
    }
    printf("\n");
    
    // 12.3
    double x = 373.592;
    double* xp = &x;
    printf("12.3 - before: %.3f, ", *xp);
    *xp = 123.456;
    printf("after: %.3f\n", *xp);

    // 12.4
    int iArr[] = {2, 4, 6, 8, 10};
    int* iArrP = iArr;
    printf("12.4 - ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", iArrP[i]);
    }
    printf("\n");

    // 12.5
    char* charP = "abc def";
    printf("12.5 - %s\n", charP);

    // 12.6
    int afi[] = {1, 3, 5, 7, 9};
    printf("12.6 - ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", afi[i]);
    }
    int* afip = afi;
    afip += 2;
    printf(", 3d element: %d, ", *afip);
    afip ++;
    printf("4th element: %d\n", *afip);

    // 12.7
    char* pArr[] = {"first", "second", "third", "fourth"};
    printf("12.7 - ");
    for (int i = 0; i < 4; i++)
    {
        printf("%s ", pArr[i]);
    }
    printf("\n");
}
