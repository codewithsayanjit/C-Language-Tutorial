#include<stdio.h>
int main(){
    for(int i = 1; i<=5; i++){
        if(i == 3){ // If i is 3, skip the rest of the loop
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}