#include <stdio.h>

struct charset {
    char s;
    int i;
};

void keyValue(char* s, int* i)
{
    scanf("%c %d", s, i);
}

int main(int argc, char const *argv[])
{
    struct charset cs;
    keyValue(&cs.s, &cs.i);
    printf("%c %i\n", cs.s, cs.i);
    return 0;
}
