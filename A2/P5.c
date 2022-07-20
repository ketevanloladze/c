#include <stdio.h>
int main () {
    int integer;
    int *ptr;

    scanf("%d", &integer);
    printf("The value of the integer: %d\n", integer);

    ptr = &integer;
    printf("Address contained in the pointer: %p\n", ptr);  //ptr_s address gvinda tviton racaa magisi

    *ptr = *ptr + 5;
    printf("Modfied value: %d\n", *ptr); //* - es mititebisaa

    *ptr = *ptr + 10;
    printf("Modfied value: %d\n", *ptr); //* - es mititebisaa
    return 0;


}