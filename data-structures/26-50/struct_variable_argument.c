#include <stdio.h>

// Unlike arrays, name of the structure variable are not pointers (pass by value).
struct point
{
    int x;
    int y;
};

void print(struct point p) {
    printf("%d %d\n", p.x, p.y);
}

int main(int argc, char const *argv[])
{
    struct point p1 = {22, 43};
    struct point p2 = {11, 55};
    print(p1);
    print(p2);

    return 0;
}
