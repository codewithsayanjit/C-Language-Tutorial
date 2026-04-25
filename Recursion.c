// Recursion : When a function calls itself, it's called recursion.


// Print "Hello World" 5 times.

#include<stdio.h>
void printHW(int count);
int main(){
    printHW(5);
    return 0;
}

// recursive function
void printHW(int count){
    if (count == 0){  // Base case is the condition which stops recursion.
        return;
    }
    printf("Hello World \n");
    printHW(count-1);
}