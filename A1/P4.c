#include <stdio.h>
int main () {
    float x = 17;
    int y = 4;
    int sum = x + y;
    int product = x * y;
    int diff = x - y;
    float div =  x / y;
    int reminder = (int) x % y;

    printf("x=%f\n", x);
    printf("y=%d\n", y);
    printf("sum = %d\n",  sum);
    printf("product = %d\n", product);
    printf("difference = %d\n", diff);
    printf("division = %f\n", div);
    printf("reminder of division with lame way = %d\n", reminder);

    int h = (int) div * y;
    int l = x - h;
    printf("reminder of division = %d\n", l);
    
    return 0;
}