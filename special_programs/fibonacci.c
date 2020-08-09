#include <stdio.h>

int main(){
    int n, a=0, b=1, i, result;
    printf("Coloca um número aí pra escrever os fibonacci tudo aqu, pufavô: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
    printf("\n");
    return 0;
}