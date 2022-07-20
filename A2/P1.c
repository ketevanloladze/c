#include <stdio.h>
int main() {
     double double1;
     double double2;
    
     int integer1;
     int integer2;
     
     char character1;
     char character2;
     
     scanf("%lf", &double1);
     scanf("%lf", &double2); 
     
     double sumOfDoubles = double1 + double2;
     double differenceOfDoubles = double1 - double2;
     double squareOfDoubles = double1 * double1;
     
     printf("sum of doubles = %lf\n", sumOfDoubles);
     printf("diff of doubles =%lf\n", differenceOfDoubles);
     printf("square of double =%g\n", squareOfDoubles);
     // doubles done

     scanf("%d", &integer1);
     scanf("%d", &integer2);
     
     int sumOfInts = integer1 + integer2;
     int prodOfInts = integer1 * integer2;
     
     printf("sum of int = %d\n", sumOfInts);
     printf("prod of int = %d\n", prodOfInts); 
     //int done

     getchar();
     scanf("%c", &character1);
     getchar();
     scanf("%c", &character2);

     int sumOfChars = character1 + character2;
     int prodOfChars = character1 * character2;

     printf("sum of chars = %d\n", sumOfChars);
     printf("product of chars =%d\n", prodOfChars);
     printf("sum of chars = %c\n", sumOfChars);
     printf("product of chars = %c\n", prodOfChars);
    return 0;
}