#include <stdio.h>

int main(){
    int number, count=0, result=0, mul=1, cnt, remainder;
    printf("Coloca um número aí, pufavô: ");
    scanf("%d", &number);

    // Conta o número de digitos de n
    int q = number;
    while(q != 0)
    {
        q = q/10;
        count++;
    }

    cnt = count;
    q = number;

    while (q!=0)
    {
        remainder = q%10;
        while (cnt!=0)
        {
            mul = mul*remainder;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    
    if(result==number)
        printf("%d is a Armstrong number!\n", number);
    else
        printf("%d is a Armstrong number!\n", number);

    return 0;
}