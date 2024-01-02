// Pointers: a variable that stores the memory address of another variable
// motherboard pe pahle se set hota hai ki kis memory location ka kya address hoga, yeh according to 32-bit ya 64-bit architecture se decide hota hai, har system har machine ka alag address hota hai
/*
    INSIDE MEMORY

    age (variable)                                  ptr (variable)
    22 (data)                                       2010 (data as memory address of age)
    2010 (memory address of age)    2011    2012    2013 (memory address of ptr)
*/

// #include <stdio.h>
// int main()
// {
//     int age = 22;
//     int *ptr = &age; // ptr ek variable hai jo age ka address store kar raha hai
//     // * value at address, & address of
//     int pointer = *ptr; // pointer mein aayegi value at address stored in ptr
//     // ptr pe gaye, waha ek address stored hai, us address pe gaye, waha wali value pointer mein daal do

//     /* POINTER DECLARATION: jis datatype ke variable ka address store karvana hai usi datatype ka pointer create karenge

//         int age = 22;           int *ptr = &age;
//         char star = '*';        char *ptr = &star;
//         float price = 12.2;     float *ptr = &price;

//     pointer ka type depends on kis type ka address aap store karva rahe ho */

//     /* FORMAT SPECIFIER for address
//     1. address ka apna ek type hota hai jiske liye we use: %p (pointer address)
//         a. %p likhne se hexadecimal value print hogi agar memory location ka address hexadecimal mein hai toh
//         b. %u (unsigned int) use karte hai instead of %p agar hume normal numbers chahiye toh, hum typecast kar dete hai */
//     printf("%p \n", &age); // %p: address ka type, &age: age variable ka address
//     printf("%p \n", ptr); // ptr ek pointer create kiya tha humne jisme age variable ka address store karvaya tha, hence both the above printf statements are same
//     printf("%p \n", &ptr); // pointer ptr ka khudka address 

//     // using unsigned int for address
//     printf("%u \n", &age);
//     printf("%u \n", ptr);
//     printf("%u \n", &ptr);

//     // (value at address) operator for value
//     printf("%d \n", age);
//     printf("%d \n", *ptr); // '*' matlab value at address stored in ptr
//     printf("%d \n", *(&age)); // age variable ka address de diya, then value at that address
//     // same values for all 3 statements


//     /* POINTER TO POINTER: a pointer variable that stores the memory address of another pointer 
//     INSIDE MEMORY:
    
//     VARIABLE:   age      -      pointerToPointer        pointer
//     VALUE:      22       -      2013                    2010
//     ADDRESS:    2010    2011    2012                    2013

//     SYNTAX:
//     int **pointerToPointer;
//     char **pointerToPointer;
//     float **pointerToPointer;
//     */
//     float price = 100.00;
//     float *pointer = &price;
//     float **pointerToPointer = &pointer;

//     return 0;
// }

/* POINTERS IN FUNCTION CALL:
        1. Call by value: we pass value of variable as argument
        2. Call by reference: we pass address of variable as argument
*/

#include <stdio.h>

void square(int n); // call by value

void _square(int *n); // call by reference (*n, pointer variable which will store the address of number variable)

int main()
{
    int number = 4;

    // call by value
    square(number);
    printf("Number = %d\n", number);

    // call by reference
    _square(&number); 
    printf("Number = %d\n", number); // *n = 16, value at address stored in n = 16, directly address mein jaa kar value hi change kar di 

    return 0;
}

// copy of data stored in variable "number" is passed in "sq" by default (call by value)
void square(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}

// call by reference = pointer variable ko parameter liya, address of the variable ko as an argument pass kiya pointer variable mein, ab variable ke andar stored data mein changes ho jayenge kyuki address ko use kar rahe hai directly
void _square(int *n)
{
    // value at address stored in n = (value at address stored in n) * (value at address stored in n)
    // n mein number ka address stored hai jiski value hai 4
    *n = (*n) * (*n); // 4 * 4 = 16
    printf("Square = %d\n", *n);
}

// call by reference mein hum directly memory location ko access karte hai isleye base location ka data change kar sakte hai, call by value mein data copy hota hai isleye base location ka data alter nahi kar sakte