// variables: name of a memory location which stores some data, it is basically a container where we can store data (shoes-> data, shoebox-> variable)
// rules for a variable: 1. are case sensitive, 2. 1st character should be alphabet or "_", 3. no comma or blank space, 4. no other symbol other than "_"

#include <stdio.h> // preprocessor directive or header file 
int main() // main function se c program execute hona start hota hai line by line 
{
    int age = 21; // datatype variable = data;
    printf("My current age is %d.\n", age); // output: printf, next line: \n
    age = 23; // value of a variable can be updated 
    printf("My age when I will be pursuing a job: %d\n",age);

    // datatypes: kis type ka data store kar rahe ho aur woh kitna space le raha hai memory location mein: char 1 byte, int 2 byte, float 4 byte.
    int number = 16;
    printf("Number is %d\n", number); // for int "%d" 
    char star = '*'; // single quotes to store a character value
    printf("Star looks like this %c\n", star); // for char "%c"
    float pi = 3.14;
    printf("The value of pi is %f\n", pi); // for float "%f"
    // format specifiers: %c, %f, %d

    int people;
    printf("Enter the number of people participated: ");
    scanf("%d", &people); // input: scanf, &: variable ka address
    printf("The number of people participated are %d\n", people);

    // constant: 1. integer constant (1, -1) 2. real constant (3.14, -3.14) 3. character constant ('a', 'A', '&')
    // keywords: reserved words which have a special meaning to the compiler (32 keywords in C) such as int, void, while, for etc. (special words jiska matlab sirf compiler ko pata hai toh usko as a variable use nahi karna hai)

    // ques. add 2 numbers
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("The sum is %d", a + b);

    return 0; // 0 shows 0 errors, code successfully run ho gaya 
}

// comments: lines that are not part of the program (2 types)
// single line comment 
/* multiple
line
comment */

// compilation: a computer program that translates c code into machine code 
// file_name.c (written by the programmer) -> c compiler -> file_name.exe (understood by the machine)