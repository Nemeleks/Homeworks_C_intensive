#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

int main (int argc, char** argv)
{
    t_line line_result;
    t_point pnt1;
    t_point pnt2;
    printf("Enter first coordinates:\n");
    printf("x1 = ");
    scanf("%lf", &pnt1.x);
    printf("y1 = ");
    scanf("%lf", &pnt1.y);
    printf("Enter second coordinates:\n");
    printf("x2 = ");
    scanf("%lf", &pnt2.x);
    printf("y2 = ");
    scanf("%lf", &pnt2.y);
    line_result = line_lenght(pnt1, pnt2);
    printf("x1 = %lf y1 = %lf x2 = %lf y2 = %lf Lenght = %lf", \
    line_result.point1.x, line_result.point1.y, line_result.point2.x, line_result.point2.y, line_result.lenght);
    return 0;
}