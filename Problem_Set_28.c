// Write a program to store the data of 3 students.


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
    struct student s1;
    s1.roll = 55;
    strcpy(s1.name, "Sayanjit Jana");
    s1.cgpa = 8.5;

    printf("Student name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %.2f\n", s1.cgpa);

    struct student s2;
    s2.roll = 28;
    strcpy(s2.name, "Rahit Maity");
    s2.cgpa = 8.0;

    printf("Student name = %s\n", s2.name);
    printf("Student roll no = %d\n", s2.roll);
    printf("Student cgpa = %.2f \n", s2.cgpa);

    struct student s3;
    s3.roll = 70;
    strcpy(s3.name, "Abhimanuy Mondal");
    s3.cgpa = 8.3;

    printf("Student name = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa= %.2f\n", s3.cgpa);
    return 0;
}