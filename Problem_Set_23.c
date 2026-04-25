// Make a program that inputs user's name & prints its length.

#include <stdio.h>
int countLength(char arr[]);
int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is : %d", countLength(name));
    return 0;
}
int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}


// Take a string input from the user using %c

#include <stdio.h>
int main()
{
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}