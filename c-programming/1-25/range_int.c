#include <stdio.h>
#include <limits.h>

int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("Range of signed integer is from: %d to %d\n", var1, var2);

    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    printf("Range of unsigned integer is from: %u to %u\n", var3, var4);

    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;

    printf("Range of short integer is from: %d to %d\n", var5, var6);

    unsigned short int var7 = 0;
    unsigned short int var8 = USHRT_MAX;

    printf("Range of short integer is from: %u to %u\n", var7, var8);

    return 0;
}