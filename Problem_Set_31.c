// Create a structure to store complex numbers.(Use arrow operator)

#include <stdio.h>
#include <string.h>

struct complex
{
    int real;
    int img; // img means imaginary
};

int main()
{
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("real part = %d\n", ptr->real);
    printf("imaginary part = %d\n", ptr->img);
}