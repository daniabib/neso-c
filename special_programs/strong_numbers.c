#include <stdio.h>

int main(){
    int number, fact=1, result = 0;
    printf("Coloca um número aí, pufavô: ");
    scanf("%d", &number);

    int q=number;
    while (q!=0)
    {
        int rem = q%10;
        for (int i=1; i<=rem; i++)
        {
            fact = fact*i;
        }
        result = result + fact;
        fact = 1;
        q = q/10;
    }

    if(result==number)
        printf("%d is a Strong Number!\n", number);
    else
        printf("%d is not a Strong Number!\n", number);

    return 0;
}