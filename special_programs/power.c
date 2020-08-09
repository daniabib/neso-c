#include <stdio.h>

int main(){
    int a, b, result, i;

    printf("Insert numbers to power: ");
    scanf("%d %d", &a, &b);  

    result = 1;
    for(i=1;i<b;i++)
    {
        printf("a: %d\n", a);
        printf("b: %d\n", b);
        printf("i: %d\n", i);
        printf("i: %d\n", result);
        result = result * a;
    }

    printf("%d\n", result);

    return 0;
}