#include <stdio.h>

int main(){
    int x, y;
    printf("Coloca dois número aí pra eu somar, pufavô: ");
    scanf("%d %d", &x, &y);

    if (y > 0)
    {
        while (y != 0)
        {
            x++;
            y--;
        }
    }
    else if (y < 0)
    {
        while(y != 0)
        {
            x--;
            y++;
        }
    }

    printf("A soma dá %d!\n", x);

    return 0;
}