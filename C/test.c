#include <stdio.h>

char ft_putchar(char c);
void printarr(int *p, int size, int column);
int calcCount(int column, int *arr, int size, int direction);

int main(void)
{
    const int column = 4;
    int arr[column * column] = {};
    /*
0123
0123
0123
0123
   */

    int i = 0;
    int j = 0;

    // create matrix
    while (i < column)
    {
        j = 0;
        while (j < column)
        {
            arr[column * i + j] = j;
            ++j;
        }
        i++;
    }

    calcCount(column, arr, sizeof(arr) / sizeof(int));

    printarr(arr, sizeof(arr) / sizeof(int), column);

    return 0;
}