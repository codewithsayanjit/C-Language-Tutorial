/*
typedef Keyword :
            Used to create alias(Nick Name) for data types
*/

#include <stdio.h>
#include <string.h>
typedef struct Computer_Science_Engineering_Student
{
    int roll;
    float CGPA;
    char name[100];
} CSE;      // Nick Name is used before terminator(;)

int main()
{
    CSE s1;
    s1.roll = 55;
    strcpy(s1.name, "Sayanjit Jana");
    s1.CGPA = 8.5;

    printf("Student name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %.2f\n", s1.CGPA);
    return 0;
}