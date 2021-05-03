#include <stdio.h>

// Creating an array of mixed data types
typedef union {
    int a;
    char b;
    double c;
} data;

int main(int argc, char const *argv[])
{
    data arr[10]; // Creates an array where each element is of type data
    arr[0].a = 65;
    arr[1].b = 'b';
    arr[2].c = 22.543;


    printf("arr[0].a: %d\n", arr[0]);
    printf("arr[0].b: %c\n", arr[0].b);
    printf("arr[2].c: %f\n", arr[2].c);
    return 0;
}
