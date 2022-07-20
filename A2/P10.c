#include <stdio.h>

int main () {

    int value;
    int resultCode = scanf("%d", &value);
    

    while ((resultCode != 1) || (value<0))
    {
        printf("Enter new value: ");
        getchar();
        resultCode = scanf("%d", &value);
        
    }
    
        int integer = value*24;
        if (value==1)
        {
             printf("%d day = %d hours\n", value, integer);
        }
        else
        {
            printf("%d days = %d hours\n", value, integer);
        }
    
    return 0;

}