/* Pointers :- A variable that stores the memory adress of another variable.*/


#include<stdio.h>
int main(){
// Syntax :    
    int age = 22;
    int *ptr = &age;   //( '*' means value at adress) ('&' means  memory adress of operator)
    int _age = *ptr;   // ptr means pointer
    printf("%d",_age);
    return 0;
}