#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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

int main (int argc, char** argv)
{
    struct rectangle r;
    printf("Enter rectangle weidth : ");
    scanf("%d", &r.weidth);
    printf("Enter recrangle heigth : ");
    scanf("%d", &r.height);
    rt(&r);
    printf("Square of Your rectangle = %d, Perimetr of Your rectangle = %d", r.s, r.p);

    return 0;
}

