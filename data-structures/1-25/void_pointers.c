#include <stdio.h>

// Void is a pointer that has no data type associated with it.
// A void pointer cannot be dereferenced.
// Permits to allocate memory for any kind of data. (malloc, calloc) 

int main(int argc, char const *argv[])
{
    int n = 10;
    void *ptr = &n;

    printf("%d", *(int*)ptr);
    return 0;
}
