#include <stdio.h>

int main(){
    int sum, carry, a, b;
    printf("Coloca dois número aí, pufavô: ");
    scanf("%d %d", &a, &b);

    while (b!=0)
    {
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry; 
    }
    
    printf("The sum is %d\n", sum);

    return 0;
}