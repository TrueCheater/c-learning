#include <stdio.h>

int main()
{
    int x = 123;
    int* p = &x;
    printf("before change x = %d\n", x);
    *p = 456;
    printf("after change x = %d\n", x);

    char c = 'a';
    int a = 123;
    float f = 456.789f;
    char *cp = &c;
    int *ap = &a;
    float *fp = &f;
    printf("*cp = %c\n", *cp);
    printf("*ap = %d\n", *ap);
    printf("*fp = %0.3f\n", *fp);
    
    // reassign pointer
    int x1 = 10;
    int y1 = 20;
    printf("before change x = %d, y = %d\n", x1, y1);
    int* p1 = &x1;
    *p1 = 100;
    p1 = &y1;
    *p1 = 200;
    printf("after change x = %d, y = %d\n", x1, y1);

    //pointers and arrays
    int arr[5] = {10, 20, 30, 40, 50};
    int* arrp = arr;    // points at the first array element
    printf("*arrp = %d\n", *arrp);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arrp[i]); // or *(arrp + i)
    }
    printf("\n");
    *arrp = 11; // change the first element
    arrp = &arr[4];
    *arrp = 55; // change the last element
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // or *(arrp + i)
    }
    printf("\n");

    // pointer arithmetics
    arrp = arr;
    printf("pointed to value:  %d\n", *arrp);
    arrp++;
    printf("pointed to value:  %d\n", *arrp);
    arrp += 2;
    printf("pointed to value:  %d\n", *arrp);

    // void pointers
    int *ip = &x;   // x = 456
    void *vp;
    vp = ip;
    printf("void pointer:  %d\n", *((int *)vp));

    printf("char pointer:  %p\n", (void *)cp);
    printf("int pointer:  %p\n", (void *)ap);
    printf("float pointer:  %p\n", (void *)fp);

    int* nullp = NULL;
    printf("null pointer:  %p\n", (void *)nullp);
    
}
