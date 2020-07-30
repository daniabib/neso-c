// Bitwise operator age em cada bit de duas estruturas dadas

#include <stdio.h>

int main () {

    int x = 1, y = 2;
    if (x&y)
        printf("x & 1 = 1\n");
    if (x&&y)
        printf("x && y = 1\n");

    char var = 3;   //3 em binário  = 0000 0011
    printf("%d\n", var << 1);  // << left-shift -> 0000 0110
                               // Trailling vira 0

    printf("%d\n", var >> 1);  // << right-shift -> 0000 0001
    
    // Obs.: Operator não altera o valor, apenas retorna
    printf("%d\n", var);
    
    //XOR
    

    return 0;
}

