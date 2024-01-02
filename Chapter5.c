// functions: block of code that performs a particular task, it can be used multiple times, increase code reusability
// this is how function works: take argument (input) -> do work -> return result (output)
// argument means input parameters, jo value hum de rahe hai function ko

/* syntax 1
function prototype/declaration: tells the compiler that we are going to write a function in c, function's name is user defined
    void printHello();
this syntax tells the compiler ki hum is naam ka ek function banana chahte hai
void: it will do the work but it will not return anything 
*/

/* syntax 2
function definition: do the work, tells the compiler what is the work of the function, this syntax tells the compiler ki is function ka kaam kya hai, basically yeh kya karne wala hai
    void printHello()
    {
        printf("Hello");
    }

    returnType functionName()
    {
        // function block where we have to write the work to be done by the function
    }
*/

/* syntax 3
function call: use the work
    int main() // int: returnType (integer), main: keyword
    {
        printHello(); // calling statement: upar banaye hue function ko main function ke andar call kar rahe hai
        return 0; // 0: returnType integer hai isleye integer return kar raha hai yaha
    }
*/

/*
#include <stdio.h>

void printHello(); // 1. function ko declare kiya hai

int main()
{
    printHello(); // 3. function ko call kiya hai
    return 0;
}

void printHello()
{
    printf("Hello"); // 2. function ko define kiya hai
}
*/

/* properties of a function:
        1. execution of the program always starts from main
        2. a function gets called directly or indirectly from main
        3. there can be multiple functions in a program
*/        

// 2. a function gets called directly or indirectly from main
/*
#include <stdio.h>

void printNamaste();
void printBonjour();

int main()
{
    printNamaste(); // printNamaste is called directly but printBonjour is called indirectly
    return 0;
}

void printNamaste()
{
    printf("Namaste! \n");
    printBonjour(); // printBonjour is called directly here 
}

void printBonjour()
{
    printf("Bonjour! \n");
}
*/

/* 2 types of functions: 
1. library function (special functions inbuilt in C): printf(), scanf()
        as we have included stdio.h library in the starting of the program, we can use printf() and scanf() library functions
2. user defined function (declared and defined by the programmer)
*/

/* passing arguments: functions can take value (parameter) and give some value (return value)
    void printHello(); // neither argument nor return value
    void printTable(int n); // only argument is passed, no return value
    int sum(int a, int b); // argument is passed as well as return value is given (int)
*/

// ek function jo 2 parameter lekar return value mein dono ka sum dega
/*
#include <stdio.h>

int sum(int x, int y);

int main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int s = sum(a, b); // a ki value x mein aur b ki value y mein copy ho gayi

    printf("Sum is %d.", s);

    return 0;
}

int sum(int x, int y)
{
    return x + y; // yeh return value sidha waha jati hai jaha is function ko call kiya gaya hai
}
*/

// ek function ek parameter lega aur uski table print karega
/*
#include <stdio.h>

void printTable(int n); // function declaration, 1 parameter passed, no return value

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printTable(n); // function calling, n given by the user is passed through the function
    // here n is called argument/actual parameter, where the function is called 

    return 0;
}

void printTable(int n) // function definition, here n is called parameter/formal parameter 
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
}
*/

/*  
    argument: 
        1. values that are passed in function call
        2. used to send value
        3. actual parameter
    parameter:
        1. values in function declaration and function definition
        2. used to receive value
        3. formal parameter
*/         

/* NOTE: 
1. function can only return one value at a time 
2. changes to parameter in function don't change the values in calling function (because a copy of argument is passed to the function)

#include <stdio.h>

void calculatePrice (float value);

int main()
{
    float value = 100.0;
    calculatePrice(value);
    printf("Value is %f.", value); // value = 100
    return 0;
}

void calculatePrice (float value)
{
    value = value + (0.18 * value); // parameter value mein kuch bhi change karo woh argument value ko change nahi kar payega, argument value parameter value mein copy hoti hai, isleye is copy mein kuch bhi change karte raho argument value as it is rahega
    printf("The final price is %f.\n", value); // value = 118
} 
*/

// recursion: when a function calls itself, it is called recursion 
// koi kaam agar loop se ho sakta hai toh wahi kaam recursion se bhi ho sakta hai and vice versa
// base case: where recursion ends
/* properties of recursion: 
1. anything that can be done with iteration/loop, can be done with recursion and vice versa
2. recursion can sometimes give the most simple solution
3. base case is the condition which stops recursion
4. iteration has infinite loop and recursion has stack overflow */