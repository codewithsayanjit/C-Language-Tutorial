// Swap 2 numbers, a & b.(Interchange 2 numbers)



/*#include<stdio.h>
void swap(int a, int b);
int main(){
    int num1 = 3, num2 = 5;
    swap(num1,num2); // Call by value 
    printf("x = %d & y = %d\n",num1,num2);
    return 0;
}
void swap(int a,int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n ",a,b);
}*/



#include<stdio.h>
void _swap(int *a, int *b);
int main(){
    int a= 3, b = 5;
    printf("a = %d & b = %d\n",a,b);
    _swap(&a,&b);   // Call by reference
    printf("x = %d & y = %d\n",a,b);
    return 0;
}
void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}