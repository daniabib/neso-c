#include <stdio.h>

// An enumeration is a user defined one-of structure

enum Bool {False, True};

int main(int argc, char const *argv[])
{
    enum Bool var; // enums can be declared in local scope.
    var = True;
    printf("%d", var);
    return 0;
}
