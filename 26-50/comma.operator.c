#include <stdio.h>

// Comma operator é o operador com a menor precedência
// Funciona como um separador. Retorna o operando mais à direira,
// avalia o restante e ignora.
int main(){
    int var;
    int num;

    num = (var = 15, var+35);
    printf("%d\n", num);

    return 0;
}