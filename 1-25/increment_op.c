#include <stdio.h>

int main() {

    int a = 4, b = 3;
    int x = a++;
    int y = ++a;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", a+++b); // |a| |++| |+| |b|  

    return 0;
}