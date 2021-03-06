#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row = 4;
    int col = 6;

    int arr[row][col];
    printf("Printing with two for loops: ");
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = count;
            count++;
            printf("%d ", arr[i][j]);
        }
    }

    printf("\nPrinting with pointers: ");
    for (int *p = &arr[0][0]; p <= &arr[row - 1][col - 1]; p++)
        printf("%d ", *p);

    /* FORMULA TO FIND 2D ARRAY ADRESS
    to find adress a[i][j]:
            BA + (i * NC + j) * c
            
    BA: Base Adress
    NC: # of columns
    i : rows
    j: columns
    c: size of data type  */

    return 0;
}
