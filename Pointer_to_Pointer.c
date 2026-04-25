// Pointer to Pointer :- A variable that stores the memory address of another pointer.


#include<stdio.h>
int main(){
// Syntax :    
    int age = 22;
    int *ptr = &age;
    int **pptr = &ptr; // pptr means pointer to pointer
    printf("Age is : %d",**pptr);
    return 0;
}