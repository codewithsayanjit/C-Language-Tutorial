/*Syntax :
int aadhar[10];
int *ptr = &aadhar[0];
*/


#include<stdio.h>
int main(){
    int aadhar[5];
    // input :
    // int *ptr = &aadhar[0];  // First memory location
    for(int i = 0;i<5;i++){
        printf("%d index : ",i);
        //scanf("%d",(ptr+i));      OR
        scanf("%d",&aadhar[i]);
    }
    // Output :
    for(int i = 0;i<5;i++){
        //printf(" %d index = %d\n",i,*(ptr+i));        OR
        printf(" %d index = %d\n",i,aadhar[i]);
    }
    return 0;
}