#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <ctype.h>

char* itb(unsigned a)
{
    int len;
    char string[6];
    itoa(a, string, 2);
    len = strlen(string);
    char *buffer = (char*)malloc(len+1);
    if (buffer == NULL)
        return 0;
    buffer = string;
    return buffer;
}

int main (int argc, char** argv)
{
    unsigned num;
    char* result;
    printf("Enter unsigned integer: ");
    scanf("%d", &num);
    result = itb(num);
    printf("Your numer %d in binar system : %s\n", num, result);
    free(result);

    return 0;
}