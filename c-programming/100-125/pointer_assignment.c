#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10, j = 20;
    int *p, *q;
    p = &i;
    q = &j;

    printf("p = %d ; q = %d\n", *p, *q);

    // *q = 333;
    // printf("p = %d ; q = %d\n", *p, *q);

    *q = *p;
    printf("p = %d ; q = %d", *p, *q);

    q = *p;
    printf("p = %d ; q = %d", *p, *q); // Segmentation fault

    return 0;
}
