// Print 1(true) or 0 (false) for following statements:

#include<stdio.h>
#include<math.h>
    int main(){
/*  int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n",isSunday && isSnowing); 
    return 0;
  } */

     /*int isMonday= 0;
       int isRaining = 1;
       printf("%d \n",isMonday || isRaining);
       return 0;
   } */

   int x;
   printf("Enter a number: ");
   scanf("%d", &x);
   printf("%d \n",x>9 && x<100);
   return 0;
}