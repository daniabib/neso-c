#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i  = 1;
    int *p = &i;
    int *q;
    q = p;
    *q = 5;

    printf("p adress: %p\n", p);
    printf("p points to value: %d\n", *p);

    printf("q adress: %p\n", q);
    printf("p points to value: %d\n", *p);

    return 0;
}
