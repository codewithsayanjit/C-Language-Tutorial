// Write a function to count the number of odd numbers in an array.


#include<stdio.h>
int countOdd(int arr[],int n);
int main(){
    int arr[] ={1,2,3,4,5,6};
    int n =6;
    printf("The number of odd numbers : %d",countOdd(arr,n));
    return 0;
}
int countOdd(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){           // Base case condition
        if(arr[i] % 2 != 0){      //Odd
            count++;
        }
    }
    return count;
}