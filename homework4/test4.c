#include <stdio.h>
#include <stdlib.h>

void generateArray(int ***arr, int rows, int cols)
{    
    *arr = (int **)malloc(rows * sizeof(int*));
    if (*arr == NULL)
        return 1;
        for (int i = 0; i < rows; i++)
        {
            *(*(arr)+i) = (int*)calloc(cols, sizeof(int));
        }       
}
    

int main (int argc, char** argv)
{
    int **arr;
    int rows;
    int cols;
    printf("Enter the number of rows :");
    scanf("%d", &rows);
    printf("Enter the number of cols :");
    scanf("%d", &cols);
    generateArray(&arr, rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            free(arr[i]);
        }
    }
    free(arr);
    return 0;
}