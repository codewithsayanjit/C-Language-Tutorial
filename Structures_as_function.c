#include <stdio.h>
#include <string.h>
// User defined data type
struct student
{
    int roll;
    float cgpa;
    char name[100];
}; // terminator(;) must be used

void printInfo(struct student s1);
int main()
{
    struct student s1 = {55, 8.5, "Sayanjit Jana"};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1)
{
    printf("Student Information :\n");
    printf("Student Roll=%d\n", s1.roll);
    printf("Student Name=%s\n", s1.name);
    printf("Student Roll=%.2f\n", s1.cgpa);
}