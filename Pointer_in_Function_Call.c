/* #include<stdio.h>
void square(int n);
int main(){
    int n = 4;
    square(4); // Call by value.(We pass value of variable as argument)
    printf("Number : %d\n",n);
    return 0;

}
void square(int n){
    n = n*n;
    printf("Square = %d \n",n);
} */



#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int n = 4;
    square(4); // call by value.(We pass value of variable as argument)
    printf("Number : %d\n",n);

    _square(&n); // call by reference.(We pass address of variable as argument)
    printf("Number : %d\n",n);

    return 0;
}
void square(int n){
    n = n*n;
    printf("Square : %d \n",n);
}
void _square(int *n){
    *n = (*n) * (*n);
    printf("Square : %d \n",*n);
}