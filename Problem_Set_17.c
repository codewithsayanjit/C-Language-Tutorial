// Write a function to calculate the sum,product & average of 2 numbers.
//Print that sum, product ,average in main function.(Use pointer :call by reference)



#include<stdio.h>
void calculate(int a,int b,int *sum,int *product,int *average);
int main(){
    int a = 3,b = 5;
    int sum,product,average;
    calculate(a,b,&sum , &product , &average);
    printf("Sum : %d \nProduct : %d \nAverage : %d\n",sum,product,average);
    return 0;
}
void calculate(int a,int b,int *sum,int *product,int *average){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}
