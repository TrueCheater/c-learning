#include <stdio.h>

void myFunction(const int *myParam){
    printf("Using a constant function parameter:\n");
    printf("- pointer value is %p\n", (void *)myParam);
    printf("- pointed-to object value is %d\n", *myParam);
}

int main(void){
    const char c = 'a';
    const int x = 123;
    const double d = 456.789;
    printf("constants - %c, %d, %.3f\n", c, x, d);

    int var = 5;
    int *const icp = &var;  // constant pointer
    printf("constant pointer value is %p, pointed-to object value is %d\n", (void *)icp, *icp);
    // icp = NULL; -> error

    int var2 = 7;
    const int *cip = &var2;   // constant pointed-to object
    printf("pointer value is %p, constant pointed-to object value is %d\n", (void *)cip, *cip);
    // *cip = 45; -> error
    
    int var3 = 9;
    const int *const cicp = &var3;  // constant pointer and pointed-to object
    printf("constant pointer value is %p, constant pointed-to object value is %d\n", (void *)cicp, *cicp);

    int fx = 470;
    int *fp = &fx;
    myFunction(fp);

    const int maxSize = 3;
    int arr[maxSize];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    for (int i = 0; i < maxSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}