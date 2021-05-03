#include <stdio.h>

struct point {int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int area(struct rectangle r) {
    return r.lower_right.x * r.upper_left.y;
}

int main(int argc, char const *argv[])
{
    struct rectangle rec;
    return 0;
}
