// Print the value of 'i' from its pointer to pointer.

#include<stdio.h>
int main(){
// Syntax :    
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr; // pptr means pointer to pointer
    printf("I is : %d",**pptr);
    return 0;
}