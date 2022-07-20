#include <stdio.h>
int main () {

    int integer;
    scanf("%d", &integer);

    if (integer%2==0)
    {
        if (integer%7==0)
        {
            printf("The number is divisible by 2 and 7\n");
        }
        
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    
    return 0;

}