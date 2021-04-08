#include <stdio.h>
#include <stdlib.h>

void generateArray(int ***arr, int rows, int cols)
{    
    arr = malloc(rows * sizeof(int*));
        for (int i = 0; i < rows; i++)
        {
            arr[i] = calloc(cols, sizeof(int));
        }       
}
    

int main (int argc, char** argv)
{
    int **arr;
    int rows = 6;
    int cols = 2;
    generateArray(&arr, rows, cols);
    int **arr_result = arr;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",arr_result[i][j]);
        }
        printf("\n");
    }
    return 0;
}