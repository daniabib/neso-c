#include <stdio.h>

// Poniters and arrays
// Consider int *p = a[i]
// p = p + n * size_of_data_type
// is equivalent to: p = a[i + n]





int main(int argc, char const *argv[])
{
    // Subtract one pointer from another results in the distance between the pointers
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *q = &a[6];
    int *p = &a[2];

    printf("q - p = %ld\n", q - p);  // 4
    printf("p - q = %ld\n", p - q);  // -4

    // It's possible to make comparisson of pointers that points to the same array
    printf("q <= p: %d\n", q <= p);
    printf("q >= p: %d\n", q >= p);
    q = &a[2];
    printf("q == p: %d\n", q == p);

    // Arithmetic on pointer wich are not array pointers results in undef. behav.
    int i = 10;
    int *r = &i;
    printf("r + 3 = %p\n", r + 3);  // returns an adress on memory

    return 0;
}


