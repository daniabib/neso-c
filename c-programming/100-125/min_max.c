#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{   
    // using min max as pointers permit us to modify both variables at
    // the same time given that we can't return two diferent objects from the func.
    *min = *max = arr[0];
    for(int i = 1; i < len; i++)
    {
        if(arr[i] > *max)
        *max = arr[i];
        if(arr[i] < *min)
        *min = arr[i];
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {23, 4, 25, 122, 98, 987, 22, 33, 44, 3, 4, 5};
    int min, max;
    int len = sizeof(a) / sizeof(a[0]);  // len of array = size of total array / size of its data type
    minMax(a, len, &min, &max);
    printf("Min: %d; Max: %d\n", min, max);

    return 0;
}
