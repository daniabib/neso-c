#include <stdio.h>
#include <stdlib.h>
/* 
malloc is built-in function of the packege <stdlib.h>
Stands for "memory allocation".
Used to dynamically allocate a single large block of contiguous memory in the heap.
If succed, return a void pointer to the first byte of allocated memory. 
SYNTAX: (void*)malloc(size_t size)
*/

int main(int argc, char const *argv[])
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n*sizeof(int));  // We cast with (int*) because malloc returns a void pointer.

    if (ptr == NULL) {
        printf("Memory not avaiable.\n");
        exit(1);
    }
    for(i = 0; i<n; i++) {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }
    for(i=0; i<n; i++)
        printf("%d ", *(ptr + i));

    printf("\n");
    
    return 0;
}

