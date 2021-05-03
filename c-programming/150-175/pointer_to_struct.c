#include <stdio.h>

struct abc
{
    int x;
    int y;
};


int main(int argc, char const *argv[])
{
    struct abc a = {0, 1};
    struct abc *ptr = &a;

    printf("%d %d\n", ptr->x, ptr->y);  // ptr->x  <=>  (*ptr).x
    printf("size of a: %ld", sizeof(a));   
    return 0;
}
