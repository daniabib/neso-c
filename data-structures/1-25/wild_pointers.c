#include <stdio.h>

// Wild pointers usually points to an arbitrary memory location.

int main(int argc, char const *argv[])
{
    int *p;
    *p = 10;  // Segmentation fault (core dumped)

    printf("%p",  p); 
    return 0;
}

