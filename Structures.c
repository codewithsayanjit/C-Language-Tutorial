/*
String:
        A collection of values of different data types(int,char,float,string)*/

// Syntax:

#include <stdio.h>
#include <string.h>
// User defined data type
struct student
{
    int roll;
    float cgpa;
    char name[100];
}; // terminator(;) must used

int main()
{
    // struct student s1 = {55,9.1,"Sayanjit Jana"};    // structures initializing  
                    // OR
    struct student s1;
    s1.roll = 55;
    strcpy(s1.name, "Sayanjit Jana");
    s1.cgpa = 8.5;

    printf("Student name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %.2f\n", s1.cgpa);
    return 0;
}
