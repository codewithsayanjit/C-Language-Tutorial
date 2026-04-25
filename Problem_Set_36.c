// Write a program to write all the odd numbers from 1 to n in a FILE.

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Odd.txt","w");
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        if(i % 2 !=0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
    return 0;
}