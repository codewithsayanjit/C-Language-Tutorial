#include<stdio.h>
 // Example of Switch Case 1
int main() {    
int day;
    printf("Enter day (1-7): ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("Monday\n"); 
                break;
        case 2: printf("Tuesday\n"); 
                break;
        case 3: printf("Wednesday\n"); 
                break;
        case 4: printf("Thursday\n"); 
                break;
        case 5: printf("Friday\n"); 
                break;
        case 6: printf("Saturday\n"); 
                break;
        case 7: printf("Sunday\n"); 
                break;
        default: printf("Invalid day\n");
    } 
} 

    //Example of Switch Case without break
  /* int main() {
   int day;
    printf("Enter day (1-7): ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("Monday\n");
        case 2: printf("Tuesday\n");
        case 3: printf("Wednesday\n");
        case 4: printf("Thursday\n");
        case 5: printf("Friday\n");
        case 6: printf("Saturday\n");
        case 7: printf("Sunday\n");
        default: printf("Invalid day\n");
    } 
} */

    //Example of Switch Case 2
  /*  int number;
    printf("enter number: ");
    scanf("%d", &number);
    if(number>=0) {
        printf("Positive number\n");
        if(number%2==0) {
            printf("Even number\n");
        } else {
            printf("Odd number\n");
        }
    } else {
        printf("Negative number\n");
    }
    return 0;
} */