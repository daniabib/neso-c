#include <stdio.h>

int main() 
{
    char var1 = 65;
    char var2 = 'A';

    printf("%c\n", var1); // A
    printf("%c\n", var2); // A

    char var3 = 128;
    char var4 = -128;  // 128 e -128 tem a mesma representação em binário

    printf("%c\n", var3); // �
    printf("%c\n", var4); // �

    return 0;
}