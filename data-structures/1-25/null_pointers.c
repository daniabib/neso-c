#include <stdio.h>

// Null is a pointer that does not point to any memory location.
// Represents an invalid memory location. 

int main(int argc, char const *argv[])
{
    int *ptr = NULL; 

    printf("%d",  ptr); // 0
    return 0;
}
