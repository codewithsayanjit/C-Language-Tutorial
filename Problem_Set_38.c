// WAP to allocate memory to store 5 prices

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 100.5;
    ptr[1] = 300.40;
    ptr[2] = 400.75;
    ptr[3] = 700.87;
    ptr[4] = 956.24;

    for (int i = 0; i <= 4; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    return 0;
}