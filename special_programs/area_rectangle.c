#include <stdio.h>

struct point {int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int area(struct rectangle r) {
    return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
}

int main(int argc, char const *argv[])
{
    struct rectangle rec;
    rec.lower_right.x = 5;
    rec.lower_right.y = 0;
    rec.upper_left.x = 0;
    rec.upper_left.y = 5;

    printf("Area of rectangle = %d", area(rec));

    return 0;
}
