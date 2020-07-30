#include <stdio.h>

int main () {
    // Executa o corpo e depois checa a condição
    int n;
    do
    {
        printf("Enter a integer: ");
        scanf("%d",&n);
    }
    while(n != 42);

    printf("You are out of the loop!\n");

    return 0;
}