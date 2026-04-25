#include<stdio.h>
// declaration / function prototype
void printHello(); // void means empty space or don't return anything after function execution.

int main(){
    printHello(); // function call 
    printHello(); // ; is called as statement terminator
    printHello(); 
    return 0;
}

// function definition
void printHello(){
    printf("Hello \n");
    printf("My Name is Sayanjit Jana \n");
}