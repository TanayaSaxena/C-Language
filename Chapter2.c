// program is a sequence of instructions, instruction is a statement in a program
// types of instructions: type declaration instruction, arithmetic instruction and control instruction
// 1. type declaration instruction: declare variable before using it, compiler line by line jata hai

#include <stdio.h>
#include <math.h> // for power function

int main()
{
    int oldAge = 21;
    int years = 2;
    int newAge = oldAge + years;
    // int years = 2; // here it will throw error, as it is used above/before and declared below/afterwards

    int a, b, c;
    a = b = c = 4;
    // int a = b = c = 4; // this will throw error, as declaration and usage of the variable cannot be done simultaneously
    
// 2. arithmetic instructions: operand1 operator operand2 (a+b), single variable on LHS  
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    
    // modular or modulo operator, only for integers
    int remainder = a % b;
    printf("%d \n%d \n", 16%10, -8%3); 
    
    int power = pow(2,3); // 2 to the power 3
    printf("%d \n", power);

    // type conversion: agar koi ek operand bade container mein hai toh (here float) compiler final output ko bhi bade container (that is, float) mein daal deta hai: (int(2 byte) operator float(4 byte)) -> output: float(4 byte)
    int x = 2; float y = 4.2;
    printf("%f \n", x * y);

    // operator precedence: (*, /, %) then (+, -) then (=)
    int precedence = 4 + 9 * 10; // = 4 + 90 = 94
    printf("%d \n", precedence);
    // associativity (for same precedence): solve left to right 
    int associativity = 4 * 3 / 6 * 2; // = 12 / 6 * 2 = 2 * 2 = 4
    printf("%d \n", associativity);

// 3. control instruction (4 types): used to determine flow of program, it can alter the flow of the program, last instruction sabse pahle bhi execute ho sakti hai
    // a. sequence control: compiler reads line by line
    // b. decision control: if - else
    // c. loop control: for loop, while loop
    // d. case control: switch case

// operators: arithmetic(*, /, %, +, -), relational, logical, bitwise, assignment, ternary or conditional
    
    // relational operator: == (equal to), >, >=, <, <=, != (not equal to)
    printf("%d \n", 4 == 4); // output: 1 for true (0 for false)
    printf("%d \n", 4 != 4); // output: 0 for false (1 for true)

    // logical operator: && (and), || (or), ! (not)
    printf("%d \n", 4>3 && 7>6); // here true && true gives true, that is, 1
    // for && both statements should be true then only the final output will be true
    printf("%d \n", 4>3 || 2>9); // here true || false gives true, that is, 1
    // for || atleast one statement should be true then only the output will be true 
    printf("%d \n", !(5>2)); // (5>2) gives true, !(5>2) will give false
    // ! it reverse the output, true ko false, false ko true bana dega

    // operator precedence for arithmetic, relational, logical and assignment operators:
        // 1. ! 
        // 2. *, /, %
        // 3. +, -
        // 4. <, <=, >, >=
        // 5. ==, !=
        // 6. &&
        // 7. ||
        // 8. =

    // assignment operator: (=), short hand operators: [(+=), (-=), (*=), (/=), (%=)]
    a += b; // a = a + b; here a = b = 4, therefore final a = 8
    printf("%d \n", a);

    return 0;
}