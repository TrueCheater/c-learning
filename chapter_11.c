#include <stdio.h>

int main(int argc, char *argv[]){
    printf("the command-line arguments are:\n");
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    
}