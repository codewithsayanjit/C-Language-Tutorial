// Sum of first n natural numbers using recursion.
// n :-  1+2+3+4+_ _ _+(n-1)+n = sum(n-1)+n
// sum(n)= sum(n-1)+n



/* #include<stdio.h>
int sum(int n);
int main(){
    printf("sum is : %d \n",sum(5));
    return 0;

}
// recursive function
int sum(int n){
    if(n==1){  // Base case is the condition which stops recursion.
        return 1;
    }
    int sumNm1 = sum(n-1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
} */



// Factorial of n.
//fact(n) = fact(n-1) * n
// n! = (n-1)! * n


/* #include<stdio.h>
int fact(int n);
int main(){
    printf("Factorial is : %d \n",fact(5));
    return 0;

}
// recursive function
int fact(int n){
    if(n==1){  // Base case condition
        return 1 ;
    }
    int factNm1 = fact(n-1); // sum of 1 to n
    int factN = factNm1 * n;
    return factN;
} */


// Write a function to print n terms of the fibonacci sequence.
// fibonacy(2) = fibonaccy(1) + fibonaccy(0).
// fibonaccy(n) = fibonaccy(n-1) + fibonaccy(n-2).


#include<stdio.h>
int fib(int n);
int main(){
    printf("Fibonaccy is : %d", fib(5));
    return 0;
}
// recursive function
int fib(int n){
    if(n == 0){ // Base  case condition
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int fibNm1 = (n-1);
    int fibNm2 = (n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}