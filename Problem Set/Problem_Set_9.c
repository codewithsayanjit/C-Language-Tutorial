// Keep taking numbers as input from the user until and unless the user enters a multiple of 7.
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);

    if(n % 7 == 0){   // Multiple of 7
       break;
    }
}while(1);
printf("End\n");
return 0;
}