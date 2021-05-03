#include <stdio.h>
#define ops 4

float sum(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mult(float a, float b) { return a * b; }
float divi(float a, float b) { return a / b; }

int main(int argc, char const *argv[])
{
    float (*ptr2func[ops])(float, float) = {sum, sub, mult, divi};
    int choice;
    float a, b;
    printf("Enter your choice: 0 for sum, 1 for min, 2 for mult, 3 for divi:\n");
    scanf("%d", &choice);
    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);
    printf("%f\n", ptr2func[choice](a, b));

    return 0;
};
