/* Pointer Arithmatic :-Pointer can be incremented & decremented.
        1)    We can also subtract one pointer from another.(Difference between same data type)
        2)    We can also compare 2 pointers.(Compare between same data type)

    ptr++ means 1 datatype(4 bytes) incremented for int & float variable.
    ptr-- means 1 datatype(4 bytes) decremented for int & float variable.
    ptr++ means 1 datatype(1 bytes) incremented for char variable.
    ptr-- means 1 datatype(1 bytes) incremented for char variable.
*/

/* #include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;
    printf("Pointer = %u\n",ptr);
    ptr++;
    printf("Pointer increment = %u\n",ptr);
    ptr--;
    printf("Pointer decrement = %u\n",ptr);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int age = 22;
    int _age = 25;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n%u\n", ptr, _ptr);
    printf("Difference : %u\n", ptr - _ptr);
    printf("Comparison : %u\n", ptr == _ptr);
    return 0;
}
