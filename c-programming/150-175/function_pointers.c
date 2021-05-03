#include <stdio.h>
/* 
A function can be think like a set of instructinons stored in memory */

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int result;
    int (*ptr)(int, int) = &add;  // ptr is a pointer to a function.
    // One way of using it:
    result = (*ptr)(10, 20);
    printf("%d\n", result);

    // Another way:
    int (*ptr2)(int, int) = add;
    result = ptr(30, 20);
    printf("%d\n", result);

    return 0;
}
