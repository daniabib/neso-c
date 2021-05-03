#include <stdio.h>
#include "add.h"

// O compiler adiciona as linhas de "add.h" na hora de compilar, ficaria:
// int increment(); 

// extern int count;

int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    // count += 3;
    // value = count;
    
    printf("%d\n", value);
    return 0;
}