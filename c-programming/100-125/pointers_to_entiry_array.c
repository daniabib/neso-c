#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {1, 2, 3, 4, 5};
    int (*p)[5] = &a;  // pointer to the hole array: "*p is a pointer to 5 integer elements."
    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%d\n", **p);

    return 0;
}
