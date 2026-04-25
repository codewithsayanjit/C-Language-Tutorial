/* Arrays :- Collection of similar data types stored at contiguous(continous) memory location.
    1) Array is a Pointer.
                (Syntax :)
                        int arr[10];
                        int *ptr = &arr[0];     OR     int *ptr = arr;
Every int & float variable store 4 bytes.
Every char variable store 1 bytes.*/

#include <stdio.h>
int main()
{
    // Syntax:
    /*
        int marks[3] = {97,98,99};   // Inititalization of Array
        Memory reserved : 12 bytes  // (3 * 4 bytes)     // Every int variable store 4 bytes.
        */

    // Input & Output Syntax:
    int marks[3]; // Main  Array Syntax
    printf("Enter Physics number : ");
    scanf("%d", &marks[0]); // 0 is the base index
    printf("Enter Chemistry number : ");
    scanf("%d", &marks[1]);
    printf("Enter Math number : ");
    scanf("%d", &marks[2]);
    printf("Phy = %d\nChem = %d\nMath = %d\n", marks[0], marks[1], marks[2]);

    return 0;
}