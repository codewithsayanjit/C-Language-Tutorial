// Keep taking numbers as input from the user until and unless the user enters an odd number.

#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);

    if(n % 2 != 0){
       break;
    }
}while(1);
printf("End\n");
return 0;
}