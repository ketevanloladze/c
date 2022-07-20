#include <stdio.h>

int main () {

    double x, y;
    double *ptr_one, *ptr_two, *ptr_three;

    scanf ("%lf",  &x);
    scanf ("%lf", &y);

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("Address in pointer one: %p\n", ptr_one);
    printf("Address in pointer two: %p\n", ptr_two);
    printf("Address in pointer three: %p\n", ptr_three);

    return 0;



}