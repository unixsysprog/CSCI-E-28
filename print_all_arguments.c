
#include<stdio.h>

int main(int args, char *argv[]) {
    int i = 0;
    for (i = 0; i < args; i++)
        printf("\n%s", argv[i]);
        printf("\n");
    return 0;
}