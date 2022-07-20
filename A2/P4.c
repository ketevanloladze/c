#include <stdio.h>
int main () {
    float a, b, h;
    scanf("%f\n%f\n%f", &a, &b, &h);

    float AreaSquare = a * a;
    float AreaRectangle = a * b;
    float AreaTraingle = (a * h) / 2;
    float AreaTrapezoid = ((a +b) / 2) * h;

    printf("square area = %f\n", AreaSquare);
    printf("rectangle area = %f\n", AreaRectangle);
    printf("triangle area = %f\n", AreaTraingle);
    printf("trapezoid area = %f\n", AreaTrapezoid);

    return 0;
}