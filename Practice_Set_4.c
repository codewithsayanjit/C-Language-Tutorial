// Write a program to check whether a student has passed or failed. If it is below 30, he is failed.
//Ternary Operator

#include<stdio.h>
 int main(){
    int marks;
    printf("Enter number:");
    scanf("%d", &marks);
    marks <= 30 ? printf("Fail\n") : printf("Pass\n");
   return 0;
 }