// File Input/Output

/*
RAM (volatile memory): power off hone pe jo bhi isme saved data hai woh udd jayega (Eg. any file which is updated but the updates are not saved)

HardDisk (non-volatile memory): power off hone ke baad bhi, isme saved data as it is saved rahega (Eg. google chrome, vsCode)
*/

/*  RAM                 HardDisk
    computerProgram     Files
    (volatile)          (non-volatile)
    
Computer Programs can read from or write in files stored in the HardDisk, this process of accessing files can also be done using C, known as file I/O (Input/Output)
*/

/* File: it is a container (chunk of memory) in a storage device (HardDisk) to store data

Contents (programs are stored in RAM, volatile memory) are lost when program terminates 

Files are used to persist the data */

/* Operation on Files:
1. create a file
2. open a file
3. close a file
4. read from a file
5. write in a file */

/* Type of Files:
1. Text Files: textual data (Eg. .txt, .c, .java)
2. Binary Files (data is stored in the form of 0 and 1): binary data (Eg. .exe, .mp3, .jpg)*/

/* File Pointer: 
File is a hidden structure (declaration of the file is hidden from us and it is a structure, har system ka alag file structure hota hai, windows ka alag file structure, linux ka alag) that needs to be created for opening a file 

A file pointer that points to this structure and is used to access the file 

Syntax:
FILE *fptr;
here, FILE is a dataType and fptr is the variable name for the pointer */

#include <stdio.h>

int main()
{
    FILE *fptr;

    /* opening a file, syntax:
    fptr = fopen("fileName", mode); 
    // mode: read, write, etc
    */
    // fptr = fopen("PracticeQues.c", "r");
    
    /* closing a file, syntax:
    fclose(fptr); */

    /* BEST PRACTICE:
    Check if a file exists before reading from it. */
    /*
    fptr = fopen("Chapter50.c", "r"); // Chapter50.c does not exists
    if (fptr == NULL)
    {
        printf("File does not exists.\n");
    }
    else
    {
        fclose(fptr);
    }
    */

    /* reading from a file, syntax: 
    char ch;
    fscanf(fptr, "%c", &ch); 
    
    1. fptr: kis file se data read karna hai
    2. %c: kis type ka data read karna hai
    3. &ch: read karke data store kaha karvana hai */
    /*
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character: %c\n", ch);
    fclose(fptr);
    */

    /* writing to a file, syntax: 
    char ch = 'A';
    fprintf(fptr, "%c", ch); */
    /*
    fptr = fopen("sample.txt", "w");
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    */
    
    /*
    fptr = fopen("sample.txt", "a"); // append
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'p');
    fprintf(fptr, "%c", 'p');
    fprintf(fptr, "%c", 'l');
    fprintf(fptr, "%c", 'e');
    
    fclose(fptr);
    */

    /* Read & Write a Char: fgetc(fptr); and fputc('A', fptr); 
    reads and writes character by character */

    /* EOF (End Of File): fgetc returns EOF to show that the file has ended 
    EOF means NULL */
    fptr = fopen("sample.txt", "r");
    char ch = fgetc(fptr);
    while(ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}

/* File opening modes:

1. "r" open to read
2. "rb" open to read in binary
// agar read karne wali file exists nahi karti hai toh pointer mein NULL save hoga

3. "w" open to write
4. "wb" open to write in binary
// write karte time agar file already exists nahi karti hai toh ek nayi file ban jayegi usme write karenge 
// agar file exists karti hai toh uska already existing data delete ho jayega aur naya write wala data save hoga

5. "a" open to append 
// existing file mein old data ke baad naya data add hoke save hoga */