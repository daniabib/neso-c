#include <stdio.h>

int areaOfRect(int length, int width)
{
    int area;
    area = length * width;
    return area;
}

int main()
{
    int l = 10, w = 5;
    int area = areaOfRect(l,w);

    printf("Area of rectangle: %d\n", area);

    return 0;
}