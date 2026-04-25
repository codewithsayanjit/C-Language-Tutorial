#include<stdio.h>
int main(){  
    int age = 22;
    int *ptr = &age;   //(* means value at adress) (& means adress of operator)
    // print address 
  /*printf("%p \n ",&age);        // %p = hexadecimal
    printf("%u \n ",&age);       // %u = unsigned integer
    printf("%u \n ",ptr);
    printf("%u \n ",&ptr); */

    
    // print value
    printf("%d \n",age);
    printf("%d \n",*ptr);  // *ptr = value at adress ptr
    printf("%d \n",*(&age));  // *(&age) = value at adress ,adress of age 

  return 0;
}