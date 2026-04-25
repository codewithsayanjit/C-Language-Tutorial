// Break Statement Example
// This program demonstrates the use of the break statement in a loop.

#include<stdio.h>
int main(){
    for (int i = 1; i <= 5 ; i++) {
        if(i == 3) {
            break;
        }
        printf(" %d\n", i);
    }
    printf("end\n ");       
    return 0;
}