#include <stdio.h>

#pragma pack(1)  // Turn on the compiler feature to reduce the padding of the struct and save memory

struct abc {
    char a;
    int b;
    char c;
} var;

int main(int argc, char const *argv[])
{
    printf("%ld", sizeof(var));
    return 0;
}
