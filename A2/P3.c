#include <stdio.h>
int main (){
    int weeks, days, hours;

    printf("please enter the number of weeks:");
    scanf("%d", &weeks);

    printf("please enter the number of days:");
    scanf("%d", &days);

    printf("please enter number of hours:");
    scanf("%d", &hours);
    
    int totalhours = weeks*7*24 + days*24 + hours;

    printf("total hours = %d\n",totalhours);
    return 0;
}