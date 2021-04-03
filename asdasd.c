#include <stdio.h>
#include <math.h>
#define ARR_LENGHT 4
//3.1
int calcSquareEq(int a, int b, int c, double* x1, double* x2 )
{
    *x1 = -(double)b / (2 * a);
    return 0;
}
//3.1 end
int main (int argc, char **argv)
{
    int a = 2;
    int b = 9;
    int c = 4;
    int result;
    double x1[10];
    double x2[10];
    int arr[ARR_LENGHT];
    
//3.1
    result = calcSquareEq(a, b, c, x1, x2);
    switch (result)
    {
    case -1:
        printf("Equation hasn't roots");
        break;
    case 0:
        printf("Equation has one root. x1 = %.2lf", *x1);
        break;
    default:
        printf("Equation has two roots. x1 = %.2lf  x2 = %.2lf\n", *x1, *x2);
        break;
    }
//3.1 end

    return 0;
}