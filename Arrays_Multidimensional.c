/*Multidimensional Arrays:
    2D Arrays Syntax:  int arr[][] = {{1,2},{3,4}};                 //Declare
    3D Arrays Syntax:  int arr[][][] = {{1,2},{3,4},{5,6}};        //Declare

                    arr[0][1]                   // Access
                    arr[0][1]                   // Access
                    arr[1][0]                   // Access
                    arr[1][1]                   // Access
*/

#include <stdio.h>
int main()
{
    // Calculate 2 boy's three subject marks:(2 x 3)
    int marks[2][3]; // OR
    // int marks[2][3] ={{90,95,93},{85,90,95}};
    marks[0][0] = 90;
    marks[0][1] = 95;
    marks[0][2] = 93;

    marks[1][0] = 85;
    marks[1][1] = 90;
    marks[2][2] = 95;

    printf("%d", marks[0][1]);
    return 0;
}