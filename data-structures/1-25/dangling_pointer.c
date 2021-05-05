#include <stdio.h>
#include <stdlib.h>

// Dangling pointer is a pointer wich points to some non-existing memory location. 

int main(int argc, char const *argv[])
{
    int *ptr = (int*)malloc(sizeof(int)); 
    free(ptr); // memory is released, but ptr still exists

    printf("%p",  ptr); 
    return 0;
}
