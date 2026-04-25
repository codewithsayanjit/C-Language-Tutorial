#include <stdio.h>
#include <string.h>
// User defined data type
struct student
{
    int roll;
    float cgpa;
    char name[100];
}; // terminator(;) must used
int main(){
    struct student ECE[30];
    ECE[0].roll=43;
    ECE[0].cgpa=8.1;
    strcpy(ECE[0].name,"Dipayan Pradhan");

    printf("Name : %s\n",ECE[0].name);
    return 0;
}