#include <stdio.h>

int main() {
    
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR, a = %d and b = %d\n", a, b);

    char c = 7;
    c ^= 5;
    printf("%d", printf("%d", c+=3));

    return 0;
}