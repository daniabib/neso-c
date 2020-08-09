#include <stdio.h>
#include <math.h>

int main(){
    int number;
    int i, val1, val2, count=0;

    printf("Coloca um número aí, pufavô: ");
    scanf("%d", &number);    

    val1 = ceil(sqrt(number));
    val2 = number;

    for(i=2; i <= val1; i++)
    {
        if(val2 % i == 0)
            count = 1;
    }

    if((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
        printf("%d is prime number!\n", number);
    else
        printf("%d is not a prime number!\n", number);

    return 0;
}