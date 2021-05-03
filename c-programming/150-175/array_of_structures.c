#include <stdio.h>

struct car
{
    int fuel_tank_cap;
    int seating_cap;
    float city_miliage;
};

int main(int argc, char const *argv[])
{
    struct car c[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter car %d fuel capacity: ", i + 1);
        scanf("%d", &c[i].fuel_tank_cap);
        printf("Enter car %d seating capacity: ", i + 1);
        scanf("%d", &c[i].seating_cap);
        printf("Enter car %d city milieage: ", i + 1);
        scanf("%f", &c[i].city_miliage);
    }
    printf("\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nCar %d details: \n", i + 1);
        printf("fuel tank capacity: %d\n", c[i].fuel_tank_cap);
        printf("seat capacity: %d\n", c[i].seating_cap);
        printf("city milieage: %f\n", c[i].city_miliage);
    }

    return 0;
}
