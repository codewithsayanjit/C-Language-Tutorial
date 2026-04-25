/*
FILE - container in a storage device(hardware) to store data.
        RAM is volatile
        Contents are lost when program terminates
        Files are used to persist the data

Operation on Files:
        Create a File
        Open a file
        Close a file
        Read from a File
        Write in a File

Types of Files:
        1)Text Files:
            textual data(.txt,.c,.py,.java etc...)
        2)Binary Files:
            binary data(.exe,.mp3,.jpg etc...)

File Pointer:
                FILE is a (hidden) structure that needs to be created for opening a file.

                A FILE ptr that points to this structure & is used to access the file.

        FILE *fptr;

Opening a File:
        fptr = fopen("filename",mode); [Mode = Read("r"),Write("w") etc...]
        fptr = fopen("Test.txt", "r");

File Opening Modes:
                "r" - open to read
                "rb" - open to read in binary
                "w" - open to write
                "wb" - open to write in binary
                "a" - open to append

Read a char:
        fgetc(fptr);    
                        OR
        fscanf(fptr, "%c", &ch);        
Write a char:
        fputc('A',fptr);
                        OR
        fprintf(fptr, "%c", 'A');

End Of File(EOF):
                fgetc returns EOF to show that the file has ended.
        
        ch = fgetc(fptr);
        while (ch != EOF){
                printf("%c",ch);
        }
        
Closing a File:
        fclose(fptr);
*/


#include <stdio.h>
int main()
{
        // File Pointer
        FILE *fptr;
        // Opening a File
        // fptr = fopen("filename",mode); [Mode = Read("r"),Write("w") etc...]
        fptr = fopen("Test.txt", "r");
        char ch;
        // Reading from a file
        fscanf(fptr, "%c", &ch);
        // Writing from a file
        fprintf(fptr, "%c", 'A');
        // Output
        printf("Character = %c\n", ch);
        // Closing a File
        fclose(fptr);
        //End of File
        ch = fgetc(fptr);
        while(ch!=EOF){
                printf("%c",ch);
        }
        return 0;
}