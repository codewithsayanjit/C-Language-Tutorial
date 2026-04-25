// Find the salted form of a password entered by user if the salt is "123" & added at the end. [This is called salting process]

#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}
void salting(char password[])
{
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword, password); // newPassword = "Test"
    strcat(newPassword, salt);     // newPassword = "Test"+"123"
    puts(newPassword);
}
