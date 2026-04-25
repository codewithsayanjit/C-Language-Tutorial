/*Ternary Operator example
Conditional Operator
Used only for one line statement.
Syntax:
    condition ? expression1 (do something if TRUE) : expression2 ( do something if FALSE);*/

    
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age >= 18) ? printf("Adult\n") : printf("Minor\n");
    return 0;
}