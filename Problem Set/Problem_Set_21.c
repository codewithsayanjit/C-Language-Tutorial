// Create a 2D Array ,storing the tables of number 2 & 3.

#include <stdio.h>
void storeTable(int table[2][10], int n, int m, int number);
int main()
{
    int table[2][10];
    storeTable(table, 0, 10, 2);
    storeTable(table, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    { // 0 to 10
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    { // 0 to 10
        printf("%d\t", table[1][i]);
    }
    printf("\n");
    return 0;
}
void storeTable(int table[2][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++) // m for column no 10
    {// 0 to 10
        table[n][i] = number * (i + 1); // 2,4,6,8,10...
        // table[0][0]   table[0][1]   table[0][2]   table[0][3]....
    }
}