#include <stdio.h>

int main (){
    char character;
    scanf("%c", &character);
    int characterASCII = (int)character;

    printf("character = %c\n", character);
    printf("decimal = %d\n", characterASCII);
    printf("octal = %o\n", characterASCII);
    printf("hexadecimal = %x\n", characterASCII);
    return 0;
}