#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Hello(char* name, char* out)
{
    char welcome[255] = "Hello, ";
    name[0] = tolower(name[0]);
    if (strcmp("Igor", name) == 0) //сравнение строк - значение если 1 строка меньше второй, + если 2 больше первой и 0 если строки равны
    {
        strcpy(name, "Bro");
    }
    name[0] = toupper(name[0]);
    strcat(welcome, name); // сложение строк
    strcpy(out, welcome);// копирование строк
}

int main (int argc, char** argv)
{
    // char string1[256] = "This is a string!"; // This is a string!\0
    // char* string2 = "This is a string too";
    
    // printf("%s\n", string1);
    // printf("%s\n", string2);
    // string1[5] = 'X'; // This Xs a string 
    // printf("%s\n", string1);
    // printf("%s\n", Hello());
    // string2[5] = 'X'; // 
    // printf("%s\n", string2); // haven't outline
    char name[255];
    char result[255];
    printf("Enter your name, please: ");
    gets(name);
   // puts(name);
    Hello(name, result);
    printf("%s\n", result);

    // char num[64];
    // puts("Enter the number ");
    // gets(num);
    // int number =  atoi(num);
    // number *= number;
    // printf(" Your number in pow = %d", number );


    return 0;

}