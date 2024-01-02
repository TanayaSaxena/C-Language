// STRINGS: a character array terminated by '\0' (null character)
// '\n' for next line, '\t' for tab space, '\0' for null character
// null character denotes string termination

#include <stdio.h>
#include <string.h>

int main()
{
    // initialization of string (type 1)
    /*
    char name[] = {'T', 'a', 'n', 'a', 'y', 'a', '\0'};
    printf(name);
    printf("\n");

    char intro[] = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '\0'};
    printf(intro);
    printf("\n");
    */

    // initialization of string (type 2)
    /*
    char name1[] = "Tanaya";
    printf(name1);
    */

    // single quotes is used for characters, double quotes is used for string

    /* what happens in memory ?

    name    (string, character array)
    T   a   n   a   y   a   \0
    1   2   3   4   5   6   7   -> memory address of each character stored in the character array
    
    In the string, \0 is also stored in the array and it has a different memory address
    
    As it is an array, the memory addresses is contiguous */

    // string format specifier (%s)
    /* char name[10];
    scanf("%s", name);
    printf("Your name is %s.", name); */

    /* STRING USING POINTERS
    arrays pointer hote hai, aur string character array, hence strings bhi pointer hote hai */
    // char *str = "Hello";
    /* inside memory:                                   str
    H       e       l       l       o       \0          2000
    2000    2001    2002    2003    2004    2005        2010    -> memory address */

    // pointer notation can be modified while array notation cannot be modified
    // pointer notation: can be reinitialized
    /* 
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange); 
    */

    // array notation: cannot be reinitiated
    /*
    char cannotChange[] = "Hello World";
    puts(cannotChange);
    cannotChange = "Hello"; // shows error
    */

    // STANDARD LIBRARY: <string.h>
    
    /* 
    STANDARD LIBRARY FUNCTIONS:
    1. strlen(stringName);
        count number of characters excluding '\0'
    
    char name[] = "Tanaya";
    printf("Length is %d.", strlen(name));

    2. strcpy(newString, oldString);
        copies value of old string to new string

    char oldString[] = "oldString";
    char newString[] = "newString";
    strcpy(newString, oldString);
    puts(newString);
    
    3. strcat(firstString, secondString);
        concatenates first string with second string (2 strings ko jodd dena)
        
        [
        firstString = "Hello";
        secondString = "World";
        implies
        firstString = "HelloWorld";
        (firstString ki capacity itni honi chahiye ki woh first aur second string, dono ko store karva paye)
        ]
    
    char firstString[100] = "Hello ";
    char secondString[] = "World";
    puts(strcat(firstString, secondString));
    
    4. strcmp(firstString, secondString);
        compares 2 strings and return an integer value
        // this function can be used to form a dictionary 
        
        a. returns 0: both strings are equal
        Eg: "Hello", "Hello"

        char firstString[] = "Hello";
        char secondString[] = "Hello";
        printf("%d", strcmp(firstString, secondString));
        
        b. returns a positive value: first > second (ASCII)
        Eg: "Banana", "Apple"
        compare the first character in both the strings, if they are same, move forward, otherwise: B = 66, A = 65 implies 66-65 = +1 (ASCII values) 
        therefore, Banana > Apple
        (all this happens internally in the memory)

        char firstString[] = "Banana";
        char secondString[] = "Apple";
        printf("%d", strcmp(firstString, secondString));
        
        c. returns a negative value: first < second (ASCII)
        same explanation as above

        char firstString[] = "Banana";
        char secondString[] = "Cat";
        printf("%d", strcmp(firstString, secondString));
    */
    
    return 0;
}