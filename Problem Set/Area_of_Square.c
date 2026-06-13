// Write a C program to find the area of a square
#include <stdio.h>

int main() {
    int  side, area;

    printf("Enter the length of a side of the square: ");
    scanf("%d", &side);


    printf("The area of the square is: %d\n", side*side);

    return 0;
}