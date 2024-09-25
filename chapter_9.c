#include <stdio.h>

int main(void){
    int myarr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myarr[i]);
    }
    printf("\n");

    char chararr[] = "Hello";
    printf("%s\n", chararr);
    // printf("%d\n", sizeof(chararr));

    int twodarr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", twodarr[i][j]);
        }
        printf("\n");
    }

    int arr[3] = {1, 2, 3};
    size_t arrsize = sizeof(arr);
    printf("total array size in bytes: %ld\n", arrsize);

    size_t arrcount = sizeof(arr) / sizeof(int);
    printf("array len 1: %ld\n", arrcount);
    
    size_t arrcount2 = sizeof(arr) / sizeof(arr[0]);
    printf("array len 2: %ld\n", arrcount2);
    
}