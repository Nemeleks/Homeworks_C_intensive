#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main (int argc, char** argv)
{
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
    printf("Your numer %d in binar system : %s\n", num, result);
    free(result);

    return 0;
}
