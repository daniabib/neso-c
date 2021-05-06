#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point edit(struct point p)
{
    (p.x)++;
    p.y = p.y + 5;
    return p;  // return a struct variable 
}

void print(struct point p)
{
    printf("%d %d\n", p.x, p.y);
}

int main(int argc, char const *argv[])
{
    struct point p1 = {22, 43};
    struct point p2 = {11, 55};
    p1 = edit(p1);
    p2 = edit(p2);
    print(p1);
    print(p2);

    return 0;
}