#include <stdio.h>
#include <stdlib.h>

int generateArray(int ***arr, int rows, int cols)
{    
    *arr = (int **)malloc(rows * sizeof(int*));
    if (*arr == NULL)
        return 0;
    for (int i = 0; i < rows; i++)
    {
        (*arr)[i] = (int*)calloc(cols, sizeof(int));
        if ((*arr)[i] == NULL)
            return 0;
    }
    return 1;       
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
    if (generateArray(&arr, rows, cols) == 0)
        {
            printf("Memory ERROR!");
            return 1;
        }
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
            free(arr[i]);
    }
    free(arr);
    return 0;
}