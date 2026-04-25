/* Strings: A character array terminated by a '\0'(null character)
    Null Character denotes string termination.
        Initialising Strings:
    1)  char name[] = {'S','A','Y','A','N','J','I','T','\0'};
                                OR
        char name[] = "SAYANJIT";

    2)  char fullName[] = {'S','A','Y','A','N','J','I','T',' ','J','A','N','A','\0'};
                                OR
        char fullName[] = "SAYANJIT JANA";
*/

/*  String Format Specifier:
    Output:
        char name[] = "Sayanjit";
        printf("%s",name);

    Input:
        char name[] = "Sayanjit";
        scanf("%s",name);           // '&' do not need for string input
            IMPORTANT:  scanf() cannot input multi-word strings with spaces

    String Fumctions:
        char str[n];
        gets(str); // Dangerous & Outdated input a string(even multiword)
            OR
        fgets(str,n,stdin);  // Stops when n-1 chars input or new line is entered.
        puts(str);  // Output a string

    String using Pointers:
        char *canChange = "Hello World"; // can be reinitialized
        puts(canChange);
        canChange = "Hello";
        puts(canChange);
*/

/*
        Standard Library Functions:
                    <string.h>
                1) strlen(Str) - count number of characters excluding '\0'      [strlen means string length]
                2) strcpy(newStr,oldStr) - copies value of old string to new string     [strcpy means string copy]
                3) strcat(firststr,secStr) - concatenates first string with second(no space)        [strcat means string concatenation]
                4) strcmp(firstStr,secStr) - compares 2 strings & returns a value       [strcmp means string comparison]
                        i} 0 when first & second string equal(ASCII value)
                        ii} positive(+) when first > second(ASCII value)
                        iii} negative(-) when first < second(ASCII Value)
                6)strupr(str) - converts string to uppercase        [strupr means string to upper]
                7)strlwr(str) - converts string to lowercase        [strlwr means string to lower]
                5) strrev(str) - reverses the string         [strrev means string reverse]
*/

// Make a program that inputs user's name & prints its length.
/*
#include <stdio.h>
#include <string.h>
int countLength(char arr[]);
int main()
{
    char name[] = "Sayanjit";
    int length = strlen(name);      //1) strlen(name) - count number of characters excluding '\0'
    printf("Length is : %d", length);
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
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char newStr[] = "Sayanjit";
    char oldStr[] = "Jana";
    strcpy(newStr, oldStr);     // 2) strcpy(newStr,oldStr) - copies value of old string to new string
    puts(newStr);
}
*/

/*
#include<stdio.h>
#include<string.h>
int main(){
    char firstStr[100]="Hello";     // Size must be declared
    char secStr[]="World";
    strcat(firstStr,secStr);        //3) strcat(firststr,secStr) - concatenates first string with second(no space)
    puts(firstStr);
}
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char firstStr[] = "Banana";
    char secStr[] = "Apple";
    printf("%d", strcmp(firstStr, secStr));     // 4) strcmp(firstStr,secStr) - compares 2 strings & returns a value
    return 0;
}
