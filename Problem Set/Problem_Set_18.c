// Write a program to enter price of 3 items & print their final cost with GST.

#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 prices : ");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);
    printf("Total Price of first item : %.2f\n", price[0] + (0.18 * price[0]));
    printf("Total Price of second item : %.2f\n", price[1] + (0.18 * price[1]));
    printf("Total Price of third item : %.2f\n", price[2] + (0.18 * price[2]));
    return 0;
}