/* STRUCTURES: a collection of values of different datatypes
(alag alag datatypes ka collection)
Eg. collection of int, float, char, string
jaise array same datatype ke data ka collection hota hai waise hi structure different datatypes ka collection hai */

/* SYNTAX:
Eg: // datatype definition:
    struct student          // struct is a keyword
    {
        char name[100];
        int roll;
        float cgpa;
    };

    // declaration in the main function:
    int n;
    struct student s1; // here, int -> struct student (datatype) & n -> s1 (variableName)
    // accessing the properties of the structure using dot operator:
    s1.cgpa = 9.2;
    s1.roll = 21;
*/

/* there are two types of datatypes:
1. in-built datatypes: int, float, char
2. user-defined datatypes: structure */

#include <stdio.h>
#include <string.h>

/*
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
*/

/*
int main()
{
    struct student s1;

    s1.roll = 1695;
    s1.cgpa = 8.2;
    // s1.name = "Tanaya"; 
    // jo strings array notation se define hoti hai uski values directly change nahi kar sakte, strings ke in-built functions use karke manipulate kar sakte hai 
    strcpy(s1.name, "Tanaya");

    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);
    
    return 0;
}
*/

/* STRUCTURES IN MEMORY (structure ko declare karne pe memory mein kya hota hai) 
structures are stored in contiguous memory location 
Eg. struct student contd.

    (string 100 bytes)      (int 4 bytes)       (float 4 bytes)
    name                    roll                cgpa
    2010                    2110                2114            -> memory address
*/

/* ARRAY OF STRUCTURES 
syntax:
    dataType variableName[quantity];
        Eg:
        1. int rollNumber[100]
        2. struct student CSE[100];
        here, struct student is the dataType, CSE is the variableName and 100 is the quantity
        
        Access:
        CSE[0].roll = 21051695;
        CSE[0].cgpa = 9.5;
        strcpy(CSE[0].name, "Tanaya"); 
*/

// Passing Structure to Function:
// void printInfo(struct student s1);

// int main()
// {
    /*
    struct student ECE[100];
    
    ECE[0].roll = 1695;
    ECE[0].cgpa = 9.5;
    strcpy(ECE[0].name, "Tanaya");

    printf("Name: %s, Roll: %d, CGPA: %f", ECE[0].name, ECE[0].roll, ECE[0].cgpa);
    */

    // Initializing Structures
    /*
    struct student s1 = {"Tanaya", 1695, 9.5};
    printf("Name: %s, Roll: %d, CGPA: %f\n", s1.name, s1.roll, s1.cgpa);
    */

    /* POINTERS TO STRUCTURES
    struct student s1;
    struct student *ptr;
    ptr = &s1; // ptr mein s1 ka address store ho gaya
    
    same as,
    int a;
    int *ptr;
    ptr = &a;
    */

    /*
    struct student *ptr = &s1;
    // printf("Name: %s", *ptr); 
    // *ptr: value at address stored in ptr, point towards the complete value of s1, that is, name, roll and cgpa
    printf("student.name: %s\n", (*ptr).name);
    */

    /* ARROW OPERATOR: (*ptr).code can be written as: ptr -> code 
    printf("student->name: %s\n", ptr->name);
    */

    // printInfo(s1);

    // return 0;
// }

/*
void printInfo(struct student s1)
{
    printf("Student's Information\n");
    printf("Name: %s, Roll: %d, CGPA: %f\n", s1.name, s1.roll, s1.cgpa);
}
*/
// printInfo ka parameter original argument ki copy hai (call by value)


// typedef Keyword: used to create alias (nickname) for dataTypes
typedef struct ComputerEngineeringStudent
{
    char name[100];
    int roll;
    float cgpa;
} coe; 
// advantage of using typedef: now coe is the nickname/alias for struct ComputerEngineeringStudent

int main()
{
    struct ComputerEngineeringStudent s1;
    coe s2;
    // both are same, one with the original dataType and the other one with alias or nickname of the dataType
    
    strcpy(s2.name, "Tanaya");
    s2.roll = 1695;
    s2.cgpa = 9.5;

    printf("Name: %s, Roll: %d, CGPA: %f\n", s2.name, s2. roll, s2.cgpa);

    return 0;
}