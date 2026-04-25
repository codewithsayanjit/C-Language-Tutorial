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
    struct student s1 = {55,9.1,"Sayanjit Jana"};
    printf("Student name = %s\n", s1.name);
    return 0;
}