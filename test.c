#include <stdio.h>
#include <math.h>

int calcSquareEq(int a, int b, int c, double *x1, double *x2 )
{
    double d = pow(b,2) - (4 * a * c);
    if (d < 0)
    {
        return -1;
    }
    else if ( d == 0)
    {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return 0;
    }
    else
    {
        *x1 = (-b + sqrt(d)) / ( 2 * a);
        *x2 = (-b - sqrt(d)) / ( 2 * a);
        return 1;
    }
}

int main (int argc, char **argv)
{
    int a = 2;
    int b = 9;
    int c = 4;
    int result;
    double x1, x2;

    result = calcSquareEq(a, b, c, &x1, &x2);
    switch (result)
    {
    case -1:
        printf("Equation hasn't roots");
        break;
    case 0:
        printf("Equation has one root. x1 = %.2lf", x1);
        break;
    default:
        printf("Equation has two roots. x1 = %.2lf  x2 = %.2lf\n", x1, x2);
        break;
    }   
    return 0;
}