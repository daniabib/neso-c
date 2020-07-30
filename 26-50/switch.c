#include <stdio.h>

int main () {
    int x = 2;

    switch (x)
    {
    case 1:
        printf("x is 1");
        break;
    
    case 2:
        printf("x is 2");
        break;
    
    case 3:
        printf("x is 3");
        break;

    case 4:
        printf("x is 4");

    default:
        printf("X is a number other than 1, 2 and 3.");
        break;
    }

    return 0;
}