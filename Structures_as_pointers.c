#include <stdio.h>
#include <string.h>
// User defined data type
struct student
{
    int roll;
    float cgpa;
    char name[100];
}; // terminator(;) must be used

int main()
{
    struct student s1 = {55, 8.5, "Sayanjit Jana"};
    printf("Student name = %s\n", s1.name);

    struct student *ptr;
    ptr = &s1;
    printf("Student roll = %d\n", (*ptr).roll); // Output format pointer to structure
    printf("Student cgpa = %.2f\n", ptr->cgpa); // Arrow Operator for pointer output format
    return 0;
}