// Create a String firstName & lastName to store details of user & print all the characters using a loop.

/*#include <stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[] = "Sayanjit";
    char lastName[] = "Jana";

    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}*/



// Ask the user to enter their firstName & print it back to them.Also try this with their fullName.

#include<stdio.h>
int main(){
    /*char firstName[100];
    scanf("%s",firstName);
    printf("My Name is %s",firstName);*/
    char str[100];
    gets(str); // Dangerous & Outdated input a string(even multiword)
    fgets(str,100,stdin);  // Stops when n-1 chars input or new line is entered.
    puts(str);  // Output a string
    return 0;
}  