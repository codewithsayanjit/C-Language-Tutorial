// Print all numbers from 1 to 10, except 6



/* #include<stdio.h>
int main(){
    for(int i = 1; i<=10; i++){
        if(i == 6){ // If i is 6, skip the rest of the loop
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
} */



//Print all the odd numbers from 5 to 50
#include<stdio.h>
int main(){
    /* for(int i = 5; i<=50; i++){
        if(i % 2 != 0){ // If i is odd, skip the rest of the loop.
          printf("%d\n",i);
        }
    } */

    // Print the factorial of a number n.
    /* int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    printf("Final factorial is %d\n", factorial); */

   

    // Print reverse of the table for a number n.
    /* int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 10; i >= 1; i--){
        printf("%d\n",  n*i);
    } */



    // Calculate the sum of all numbers between 5 and 50.(Including 5 & 50)
    int sum = 0;
    for(int i = 5; i <= 50; i++){
        sum += i;
    }
    printf("Sum of all numbers between 5 and 50 is %d\n", sum); 
    return 0;
}