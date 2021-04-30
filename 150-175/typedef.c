#include <stdio.h>
/* 
Syntax: typedef existing_data_type new_data_type
typedf allow to user to create its own data type */

typedef int INTEGER;  // We define a new tag for int

typedef struct car // old type
{
    char engine[50];
    char fuel_type[10];
    int fuel_capacity;
    int seating_capacity;
} car; // new


int main(int argc, char const *argv[])
{
    INTEGER var = 100;  // We can declare a variable with our new data type
    printf("%d", var);
    car c1; // 
    return 0;
}
