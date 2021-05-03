#include <stdio.h>

int main()
{
    // register keyword diz ao compiler para guardar a variável 
    // na memória de registro (register memory - que é a mais veloz de todas)
    register int var = 5;
    return 0;
}