#include <stdio.h>
#include <math.h>
#define ARR_LENGHT 10 // for 3.3
#define ARR1_LENGHT 4 // for 3.2
// 3.1 begin
int calcSquareEq(int a, int b, int c, double* x1, double* x2 )
{
    double d = pow(b,2) - (4 * a * c);
    if (d < 0)
    {
        return -1;
    }
    else if ( d == 0)
    {
        *x1 = -(double)b / (2 * a);
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
// 3.1 end
// 3.2 begin
int arr_pointer (int* arr, int lenght)
{
    int i, c;
    c = 0;
    for (i = 0; i < lenght; i++ )
    {
        if (*arr % 2 !=0)
        {
            *arr *= 2;
            c = 1;
        }
        arr++;
    }
    return c;

}
// 3.2 end
// 3.3 begin
void asShortPrint (unsigned* a, int len)
{
    int i;
    unsigned short* s = (unsigned short*)a;
    printf("Your unsigned int array in unsigned short: ");
    for ( i = 0; i < ARR_LENGHT*2; i++)
    {
        printf("%d ", s[i]);
 
    }
}
// 3.3 end
int main (int argc, char **argv)
{
    int a = 2;
    int b = 9;
    int c = 4;
    int result;
    double x1, x2;
//3.1
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
//3.1 end
//3.2 begin
    int arr1[ARR1_LENGHT] = {4, 5, 2, 3};

    int result1 = arr_pointer(arr1, ARR1_LENGHT);
    switch (result1)
    {
    case 0:
        printf("Array hasn't odd numbers");
        break;
    
    default:
        printf("New array with *2 odd numbers: ");
        for (int i = 0; i < ARR1_LENGHT; i++)
        {
            printf("%d ", arr1[i]);
        }
        printf("\n");
        
        break;
    }
//3.2 end
//3.3 begin
   unsigned arr[ARR_LENGHT] = {0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545};
   int lenght = ARR_LENGHT;
   asShortPrint(arr, lenght);    
//3.3 end
    return 0;
}