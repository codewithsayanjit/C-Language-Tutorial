// Sum of Natural Numbers
// Using For Loop
// Sum of first n natural numbers

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i; // sum+=i;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }
    return 0;
}