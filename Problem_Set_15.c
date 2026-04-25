// Problem Set of Pointer.

#include<stdio.h>
int main (){
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0;   // x = 0

    printf("x = %d\n", x);  // x = 0
    printf("*ptr = %d\n",*ptr); // *ptr = 0

    *ptr += 5;  // *ptr = *ptr + 5; x = 5
    printf("x = %d\n",x);   // x = 5
    printf("*ptr = %d\n",*ptr); // *ptr = 5

    (*ptr)++;   // *ptr = *ptr + 1 ; x = 6
    printf("x = %d\n",x);   // x = 6
    printf("*ptr = %d\n",*ptr); // *ptr = 6

    return 0;
}