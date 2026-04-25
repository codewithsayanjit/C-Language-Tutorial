/*
#include <stdio.h>
#include <stdlib.h>
Dynamic Memory Allocation(DMA):
        It is a way to allocate memory to a data structure during the runtime.
                Two types of time :
                        1) Compile Time
                        2) Run Time

        We need some functions to allocate & free memory dynamically.

Functions for DMA:
    a. malloc() : memory allocation
    b. calloc() : continuous allocation
    c. free() : free function
    d. realloc() : re-allocation

a. malloc() : memory allocation
              takes number of bytes to be allocated & returns a pointer of type void.
            Syntax :
                    ptr = (Typecast*) malloc(size);
            Example :
                    int *ptr;
                    ptr = (int*) malloc(10 * sizeof(int)); // Allocating memory for 10 integer

            Note :
                i. malloc() returns a void pointer which can be cast to any data type.
                ii. If memory allocation fails, it returns NULL.

b. calloc() : continuous allocation
            Syntax :
                    ptr = (typeCast*) calloc(total no of location, size);
            Example :
                    int *ptr;
                    ptr = (int*) calloc(10, sizeof(int)); // Allocating memory for 10 integers

            Note :
                i. calloc() returns a void pointer which can be cast to any data type.
                ii. If memory allocation fails, it returns NULL.
                iii. Initializes with 0.

c. free() : free function
            We use it to free memory that is allocated using malloc & calloc.

            Syntax :
                    free(ptr);
            Example :

                    int *ptr;
                    ptr = (int*) malloc(10 * sizeof(int));
                    // Use the allocated memory
                    free(ptr); // Free the allocated memory
            Note :
                i. It is used to free the memory allocated by malloc() or calloc().

d. realloc() : re-allocation
               reallocate (increase or decrease ) memory using the same ointer & size.
            Syntax :
                    ptr = (castType*) realloc(ptr, newSize);
            Example :
                    int *ptr;
                    ptr = (int*) malloc(10 * sizeof(int));
                    // Use the allocated memory
                    ptr = (int*) realloc(ptr, 20 * sizeof(int)); // Re-allocating memory for 20 integers
            Note :
                i. It is used to resize the memory block allocated by malloc() or calloc().
*/
