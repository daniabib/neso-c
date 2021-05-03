#include <stdio.h>

// Unions are user defined data types but unlike structs, its members share the same location

union abc {
    int a;
    char b;
    double c;
    float d;
} var;

int main(int argc, char const *argv[])
{
    var.a = 65;
    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b); // b sahre the same memory as a. So as a is now 65, b is the char represented by 65 code: "A".

    // Size of union is taken according to its largest member
    printf("size of union abc: %ld\n", sizeof(union abc));

    // We can access members of union through pointers using ->
    var.a = 90;
    union abc *p = &var;
    printf("%d %c\n", p->a, p->b); 

    return 0;
}

