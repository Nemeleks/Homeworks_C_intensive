#include <stdio.h>
#include <math.h>
#define ARR1_LENGHT 4
// int array (int* arr, int lenght)
// {
//     int i, c;
//     c = 0;
//     for (i = 0; i < lenght; i++ )
//     {
//         if (arr[i] % 2 !=0)
//         {
//             arr[i] = arr[i] * 2;
//             c = 1;
//         }
//     }
//     return c;

// }
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
int main (int argc, char **argv)
{
    int arr[ARR1_LENGHT] = {4, 5, 2, 3};

    int result = arr_pointer(arr, ARR1_LENGHT);
    switch (result)
    {
    case 0:
        printf("Array hasn't odd numbers");
        break;
    
    default:
        for (int i = 0; i < ARR1_LENGHT; i++)
        {
            printf("New array with *2 odd numbers %d ", arr[i]);
        }
        
        break;
    }





}