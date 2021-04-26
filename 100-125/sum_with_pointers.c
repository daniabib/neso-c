#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for (p = &a[0]; p <=  &a[4]; p++)
        sum += *p; 

    printf("Sum is %d\n", sum);

    // We can write the same func. with diff. style
    int sum2 = 0;

    for(p = a; p <= a + 4; p++)
        sum2 += *p;

    printf("Sum 2 is %d\n", sum2);
    
    return 0;
}
