/* Syntax :
    //  Function Declaration :

                void printNumbers(int arr[],int n);
                                OR
                void printNumbers(int *arr,int n);

    //  Function Call :

                printNumbers(arr,n);
                                OR
                printNumbers(&arr[0],n);
*/


#include<stdio.h>
void printNumbers(int arr[],int n);
int main(){
    int arr[6] = {1,2,3,4,5,6}; // Initilization of Array
    int n = 6;
    printNumbers(arr,n);
    return 0;
}
void printNumbers(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);     //  \t means tab
    }
} 
