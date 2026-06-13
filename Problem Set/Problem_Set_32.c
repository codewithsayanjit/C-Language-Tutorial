// Make a structure to store Bank Account information of a customer of ABC Bank. Also,make an alias for it.

#include <stdio.h>
#include <string.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Sayanjit"};
    acc acc2 = {321, "Srikanta"};
    acc acc3 = {456, "Pratima"};

    printf("Account No : %d\n", acc1.accountNo);
    printf("Name :%s\n", acc1.name);

    printf("Account No : %d\n", acc2.accountNo);
    printf("Name :%s\n", acc2.name);

    printf("Account No : %d\n", acc3.accountNo);
    printf("Name :%s\n", acc3.name);
    return 0;
}