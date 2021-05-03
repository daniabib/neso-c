#include <stdio.h>

// Conditional operators são os únicos operadores ternários em C.
int main(){

    char result;
    int marks;

    scanf("Please, enter a number: %d", &marks);

    result = (marks > 33) ? 'p' : 'f';

    printf("%c\n", result);
    
    return 0;

}