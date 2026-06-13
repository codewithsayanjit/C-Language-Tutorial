// Check if a file exists before reading from it.

#include <stdio.h>
int main()
{
    // File Pointer
    FILE *fptr;
    // Opening a File
    // fptr = fopen("filename",mode); [Mode = Read("r"),Write("w") etc...]
    fptr = fopen("New.txt", "r");
    if (fptr == '\0')
    {
        printf("File doesn't exist\n");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}