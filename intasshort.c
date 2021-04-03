#include <stdio.h>
#define ARR_LENGHT 10

void asShortPrint (unsigned* a, int len)
{
    int i;
    unsigned short* s = (unsigned short*)a;
    for ( i = 0; i < ARR_LENGHT*2; i++)
    {
        printf("%d ", s[i]);
 
    }
}

int main (int argc, char ** argv)
{
   unsigned arr[ARR_LENGHT] = {0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545};
   int lenght = ARR_LENGHT;
   asShortPrint(arr, lenght);
}