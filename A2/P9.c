#include <stdio.h>

int main () {

    char ch;

    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("%c is a number\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        printf("%c is a character\n", ch);
    } else
    {
        printf("%c is some other symbol\n", ch);
    }
    
    
    return 0;

}