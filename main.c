#include <stdio.h>

void swap(int *, int *);

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}