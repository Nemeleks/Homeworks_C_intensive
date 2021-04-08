/*
 * Homework 4.
 *
 * Visual Studio Code
 * 
 * Created by Igor Kulychev
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//4.1 
char* itb(unsigned a)
{
    char *buffer;
    int temp;
    int len;

    len = 0;
    if (a == 0)
        len++;
    temp = a;
    while (temp != 0)
    {
        temp /= 2;
        len++;
    }
    buffer = (char*)malloc(len + 1);
    if (buffer == NULL)
        return NULL;
    itoa(a, buffer, 2);
    return buffer;
}
//4.1 end
//4.2
struct rectangle
{
    int weidth;
    int height;
    int s;
    int p;
};

void rt(struct rectangle *re)
{
 re->s = re->height * re->weidth;
 re->p = (re->height + re->weidth) * 2;
}
//4.2 end
//4.3
typedef struct s_point
{
    double x, y;
}t_point;

typedef struct s_line
{
    double lenght;
    t_point point1;
    t_point point2;

}t_line;

t_line line_lenght(t_point pnt1, t_point pnt2)
{
    t_line line;
    line.point1 = pnt1;
    line.point2 = pnt2;
    line.lenght = sqrt(pow(pnt2.x - pnt1.x, 2)+(pow(pnt2.y - pnt1.y, 2)));
    return line;
}
//4.3 end
//4.4
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
//4.4 end
int main (int argc, char** argv)
{
//4.1
    unsigned num;
    char* result;
    printf("Enter unsigned integer: ");
    scanf("%d", &num);
    result = itb(num);
    if (result == NULL)
        {
            printf("Memory ERROR!");
            return 1;
        }
    printf("Your number %d in binar : %s\n", num, result);
    free(result);
//4.1 end
//4.2
struct rectangle r;
    printf("Enter rectangle weidth : ");
    scanf("%d", &r.weidth);
    printf("Enter recrangle heigth : ");
    scanf("%d", &r.height);
    rt(&r);
    printf("Square of Your rectangle = %d, Perimetr of Your rectangle = %d\n", r.s, r.p);
//4.2 end    
//4.3
 t_line line_result;
    t_point pnt1;
    t_point pnt2;
    printf("Enter first point coordinates:\n");
    printf("x1 = ");
    scanf("%lf", &pnt1.x);
    printf("y1 = ");
    scanf("%lf", &pnt1.y);
    printf("Enter second point coordinates:\n");
    printf("x2 = ");
    scanf("%lf", &pnt2.x);
    printf("y2 = ");
    scanf("%lf", &pnt2.y);
    line_result = line_lenght(pnt1, pnt2);
    printf("x1 = %.2lf y1 = %.2lf x2 = %.2lf y2 = %.2lf Line lenght = %.2lf\n", \
    line_result.point1.x, line_result.point1.y, line_result.point2.x, \
    line_result.point2.y, line_result.lenght);
//4.3 end
//4.4
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
//4.4 end        
    return 0;
}
