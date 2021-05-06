#include <stdio.h>
#include <stdlib.h>

int *input()
{
    int *ptr, i;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    return ptr;
}

int main(int argc, char const *argv[])
{
    int i, sum = 0;
    int *ptr = input();
    for (i = 0; i < 5; i++)
        sum += *(ptr + i);

    printf("Sum is: %d\n", sum);
    free(ptr); // release the memory
    ptr = NULL;
    return 0;
}
