// #include <stdio.h>
// int main()
// {
    // 1. WAP to calculate area of a square
    /*
    float side;
    printf("Enter side: ");
    scanf("%f", &side);
    printf("Area of the square is %f. \n", side*side);
    */

    // 2. WAP to calculate area of a circle
    /*
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of the circle is %f. \n", 3.14 * radius * radius);
    */

    // 3. Analyse whether a = 1 or a = 2 for int a = 1.999999;
    /*
    int a = 1.999999;
    printf("%d \n", a);
    */

    // 4. Solve the following arithmetic operations
    /*
    printf("%d \n", 5 * 2 - 2 * 3); // = 10 - 2 * 3 = 10 - 6 = 4
    printf("%d \n", 5 * 2 / 2 * 3); // = 10 / 2 * 3 = 5 * 3 = 15
    printf("%d \n", 5 * (2 / 2) * 3); // = 5 * 1 * 3 = 5 * 3 = 15
    printf("%d \n", 5 + 2 / 2 * 3); // = 5 + 1 * 3 = 5 + 3 = 8
    */

    // 5. Write a program to check whether a number is divisible by 2 or not
    /*
    int num;
    printf("Enter a number: ");
    scanf("%d \n", &num);
    printf("%d \n", num % 2 == 0); // output: 1 for true, that is, divisible by 2 and 0 for false, that is, not divisible by 2
    */

    // 6. WAP to check if a number is even or odd
    /*
    int num;
    printf("Enter a number: ");
    scanf("%d \n", &num);
    printf("If the output is 1, the number is even. If the output is 0, the number is odd. Output: %d \n", num % 2 == 0);
    */

    // 7. Are the following valid or not:
    /*
        // a. int a = 8^8; (statement valid hai lekin power nahi deti)
        printf("%d \n", 8^8); // 8 XOR 8 is 0, bitwise operator

        // b. int x; int y = x; (valid)

        // c. int x, y = x; (invalid, declaration aur use sath mein kar diya x ka)

        // d. char stars = '**'; printf("%c \n", stars); (invalid)
    */

    // 8. Print 1 (true) or 0 (false) for the following:
    /*    
        // a. if it is sunday and it is snowing -> true
        int itIsSunday = 1; // true
        int itIsSnowing = 1; // true
        printf("%d \n", itIsSunday && itIsSnowing); // true

        // b. if it is monday or it is raining -> true
        int itIsMonday = 1; // true
        int itIsRaining = 0; // false
        printf("%d \n", itIsMonday || itIsRaining); // true

        // c. if a 2 digit number is greater than 9 and less than 100 -> true
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("%d \n", (9 < num) && (num < 100));
    */

    // 9. WAP to check if a student passed or failed: marks > 30 is passed, marks <= 30 is failed
    /*
    int marks;
    printf("Enter marks of a student: ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100)
    {
        printf("PASS \n");
    }
    else if (marks <= 30 && marks >= 0)
    {
        printf("FAIL \n");
    }
    else
    {
        printf("Invalid marks. \n");
    }
    */

    // 10. WAP to give grades to a student: C. marks < 30, B. 30 <= marks < 70, A. 70 <= marks < 90, A+. 90 <= marks <= 100
    /*
    int marks;
    printf("Enter marks of a student: ");
    scanf("%d", &marks);

    if (marks < 30 && marks >= 0)
    {
        printf("Grade: C \n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Grade: B \n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade: A \n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Grade: A+ \n");
    }
    else 
    {
        printf("Invalid marks \n");
    }
    */

    // 11. Will the code written below: a. give error, b. print "x is equal to 1", c. print "x is not equal to 1"
    /*
    int x = 2;

    if (x = 1) // here assignment operator is used, pahle x ki value 2 thi, yaha aake x ki value 1 ho gayi (replaced)
    {
        printf("x is equal to 1 \n"); // hence this line of code will be executed
        printf("%d \n", x); // this line is to show that the value of x is replaced
    }
    else 
    {
        printf("x is not equal to 1 \n");
    }
    // b. is correct
    */

    // 12. WAP to find if a character entered by user is uppercase or not
    // ASCII value: har character ke sath ek integer value associated hoti hai jo compiler ko pata hai already
    /*
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    // (ch >= 99) or (ch >= 'c') both are same, c ki ASCII value is 99

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case \n");
    }
    else 
    {
        printf("Invalid \n");
    }
    */

    // 13. Print the numbers from 0 to 10: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    /*
    for (int i = 0; i <= 10; i = i + 1) // (i++) can be used instead of (i = i + 1)
    {
        printf("%d ", i);
    }
    */

    // 14. Print the numbers from 0 to n if n is given by the user (n = 4)
    // using while loop
    /*
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 0;

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    */

    // using for loop
    /*
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d \n", i);
    }
    */

    // 15. Print the sum of first n natural numbers. Also print them in reverse
    /* 
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    // with two for loops
    for (int i = 1; i <= n; i++) // if i is declared inside the for loop then it cannot be used outside the for block
    {
        sum = sum + i;
    }

    printf("The sum is %d. \n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d \n", i);
    }

    // with one for loop
    for(int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d \n", j);
    }

    printf("The sum is %d.", sum);

    // with one for loop and one variable 
    for(int j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("%d \n", j);
    }

    printf("The sum is %d.", sum);
    */

    // 16. Print the table of a number input by the user
    /*
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    */

    // 17. Keep taking numbers as input from user until user enters an odd number (pahle number le lo user se phir condition check karo: do-while loop)
    /*
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        
        if (n % 2 != 0)
        {
            break;
        }

    }
    while (1); // 1 for true 
    printf("End");
    */

    // 18. Keep taking numbers as input from user until user enters a number which is a multiple of 7
    /*
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        
        if (n % 7 == 0) // n is a multiple of 7
        {
            break;
        }

    }
    while (1); // 1 for true 
    printf("End");
    */

    // 19. Print all numbers from 1 to 10 except for 6
    /*
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }        
        printf("%d \n", i);
    }
    */

    // 20. Print all the odd numbers from 5 to 50
    /*
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0) // if it is even, then skip/continue
        {
            continue;
        }        
        printf("%d \n", i);
    }
    */

    // 21. Print the factorial of a number n
    /*
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d.", n, factorial);
    */

    // 22. Print reverse of the table for a number n
    /*
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    */

    // 23. Calculate the sum of all numbers between 5 and 50 (including 5 and 50)
    /*
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;    
    }
    printf("%d \n", sum);
    */ 

    // return 0;
// }

// 24. Write 2 functions: one to print "Hello" & second to print "Good Bye"
/*
#include <stdio.h>

// function declaration
void printHello();
void printGoodBye();

// function calling
int main() // 1. program ki shuruwat hamesha main function se hoti hai
{
    printHello(); // 2. read line 1 of main function (function call)
    printGoodBye(); // 5. after the complete execution of line 1, come to line 2 and read

    return 0; // 8. function ends here 
}

// function definition
void printHello() // 3. come to this function
{
    printf("Hello! \n"); // 4. execute
}
void printGoodBye() // 6. come to this function
{
    printf("Good Bye! \n"); // 7. execute
}
*/

// 25. Write a function that prints Namaste if the user is Indian & Bonjour if the user is French
/*
#include <stdio.h>

void printNamaste();
void printBonjour();

int main()
{
    char Nationality;
    printf("What is your Nationality? (I for Indian & F for French) \n");
    scanf("%c", &Nationality);

    if (Nationality == 'I')
    {
        printNamaste();
    }
    else if (Nationality == 'F')
    {
        printBonjour();
    }
    else
    {
        printf("Hello! \n");
    }

    return 0;
}

void printNamaste()
{
    printf("Namaste! \n");
}

void printBonjour()
{
    printf("Bonjour! \n");
}
*/

// 26. Use library functions to calculate the square of a number given by the user
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int num = 10;
    printf("%f", pow(num, 2)); // power is a library function whose declaration statement is [double pow(double, double);] hence the argument num and 2 which are integer will be converted to double implicitly as double is a big container but pow(num, 2) will be a double value and it will not convert it into int (small container) hence %f is used

    return 0;
}
*/

// 27. Write functions to calculate area of a square, a circle and a rectange
/*
#include <stdio.h>

float areaOfSquare(float side);
float areaOfCircle(float radius);
float areaOfRectangle(float length, float breadth);

int main()
{
    char ch;
    printf("Type S for square, C for circle and R for rectangle: ");
    scanf("%c", &ch);

    if (ch == 'S')
    {
        float side;
        printf("Enter side: ");
        scanf("%f", &side);
        printf("Area of square is %f.", areaOfSquare(side));
    }
    else if (ch == 'C')
    {
        float radius;
        printf("Enter radius: ");
        scanf("%f", &radius);
        printf("Area of circle is %f.", areaOfCircle(radius));
    }
    else if (ch == 'R')
    {
        float length, breadth;
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter breadth: ");
        scanf("%f", &breadth);
        printf("Area of rectangle is %f.", areaOfRectangle(length, breadth));
    }
    else
    {
        printf("Invalid!");
    }
    return 0;
}

float areaOfSquare(float side)
{
    return side * side;
}

float areaOfCircle(float radius)
{
    return 3.14 * radius * radius;
}

float areaOfRectangle(float length, float breadth)
{
    return length * breadth;
}
*/

// 28. Print "Hello World" 5 times using recursion
/*
#include <stdio.h>

void printHW(int count);

int main()
{
    printHW(5);
    return 0;
}

// recursive function
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World!\n");
    printHW(count - 1); // function calls itself
}
*/

// 29. Sum of first n natural numbers using recursion
/*
#include <stdio.h>

int sum (int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of %d natural numbers is %d.", n, sum(n));
    return 0;
}

int sum (int n)
{
    if (n == 1) // base case where recursion has to end
    {
        return 1;
    }
    int sumOfnMinus1 = sum (n-1);
    int sumOfn = sumOfnMinus1 + n;
    return sumOfn;
}
*/

// 30. Factorial of n using recursion
/*
#include <stdio.h>

int factorial (int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d.", n, factorial(n));
    return 0;
}

int factorial (int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factorialOfnMinus1 = factorial(n-1);
    int factorialOfn = factorialOfnMinus1 * n;
    return factorialOfn;
}
*/

// 31. Write a function to convert celsius to fahrenheit
/*
#include <stdio.h>

float convertTemperature(float celsius);

int main()
{
    float celsius;
    printf("Enter the value in degree celsius: ");
    scanf("%f", &celsius);
    printf("Fahrenheit: %f", convertTemperature(celsius));
    return 0;
}

float convertTemperature(float celsius)
{
    return celsius * 1.8 + 32;
}
*/

// 32. Write a function to calculate percentage of a student from marks in science, math and sanskrit 
/*
#include <stdio.h>

float calculatePercentage(float Science, float Math, float Sanskrit);

int main()
{
    float Science, Math, Sanskrit;
    printf("Enter marks in Science: ");
    scanf("%f", &Science); 
    printf("Enter marks in Math: ");
    scanf("%f", &Math); 
    printf("Enter marks in Sanskrit: ");
    scanf("%f", &Sanskrit);

    printf("Total percentage: %f", calculatePercentage(Science, Math, Sanskrit));

    return 0;
}

float calculatePercentage(float Science, float Math, float Sanskrit)
{
    float totalMarks = Science + Math + Sanskrit;
    return totalMarks/3;
}
*/

// 33. Write a function to print n terms of the Fibonacci sequence 
// (F(n) = F(n-1) + F(n-2)), (0, 1, 1, 2, 3, 5, 8, ...)
/*
#include <stdio.h>

int Fibonacci(int n);

int main()
{
    int n; 
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d",Fibonacci(n));

    return 0;
}

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    if (n == 1)
    {
        return 1;
    }
    
    int FibonacciOfnMinusOne = Fibonacci(n - 1);
    int FibonacciOfnMinusTwo = Fibonacci(n - 2);
    int FibonacciOfN = FibonacciOfnMinusOne + FibonacciOfnMinusTwo;
    return FibonacciOfN;    
}
*/

// 34. Find output:
/*
#include <stdio.h>
int main()
{
    int *ptr;
    int x;

    ptr = &x; // ptr variable mein x variable ka address store ho gaya
    *ptr = 0; // ptr mein jo x ka address stored hai, uss address mein value hai 0 (value at address operator *)

    printf("x = %d\n", x); // x = 0
    printf("*ptr = %d\n", *ptr); // *ptr = 0

    *ptr += 5; // *ptr = *ptr + 5 = 0 + 5 = 5
    printf("x = %d\n", x); // x = 5
    printf("*ptr = %d\n", *ptr); // *ptr = 5

    (*ptr)++; // *ptr = *ptr + 1 = 5 + 1 = 6
    printf("x = %d\n", x); // x = 6
    printf("*ptr = %d\n", *ptr); // x = 6

    return 0;
}
*/

// 35. Print the value of 'i' from its pointer to pointer
// value: * and address: &
/*
#include <stdio.h>
int main()
{
    int i = 5;
    int *pointer = &i;
    int **pointerToPointer = &pointer; // given

    printf("Value of i is %d.\n", **pointerToPointer);
    
    return 0;
}
*/

// 36. Swap 2 numbers a and b
// solution by me, galti: actual value change nahi hui hai address mein (a, b)
/*
#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Value entered by the user:\na = %d, b = %d\n", a, b);

    swap(&b, &a);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    printf("Value after swapping:\na = %d, b = %d\n", *x, *y);
}
*/
// call by value: actual data ki swapping nahi hui
/*
#include <stdio.h>
void swap(int x, int y);

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Value entered by the user:\na = %d, b = %d\n", a, b);

    swap(a, b);
    printf("Actual value after swapping:\na = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("Value after swapping:\na = %d, b = %d\n", x, y);
}
*/
// call by reference: actual data ki swapping yaha hogi
/*
#include <stdio.h>
void swap(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Value entered by the user:\na = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("Actual value after swapping:\na = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Value after swapping:\na = %d, b = %d\n", *x, *y);
}
*/

// 37. Will the address output be same ?
/*
#include <stdio.h>
void printAddress(int n);
int main()
{
    int n = 4;
    printf("%p \n", &n); // output: address of n
    printAddress(n);
    return 0;
}
void printAddress(int n)
{
    printf("%p \n", &n); // output: address of the variable where copy of data in n is stored 
}
*/

// 38. Write a function to calculate the sum, product and average of 2 numbers. Print the sum, product and average in the main function.
// jaha ek se zada values return karni ho main function mein waha pointers use karo
// here pass by value and pass by reference both are used
/*
#include <stdio.h>
void calculate(int a, int b, int *sum, int *product, int *average);

int main()
{
    int a = 2, b = 4;
    int sum, product, average;

    calculate(a, b, &sum, &product, &average);
    printf("Sum = %d, Product = %d, Average = %d\n", sum, product, average);

    return 0;
}

void calculate(int a, int b, int *sum, int *product, int *average)
{
    *sum = a + b;
    *product = a * b;
    *average = (a + b)/2;
}
*/

// 39. Write a program to enter price of three items and print their final cost with GST
/*
#include <stdio.h>
int main()
{
    float price[3];

    printf("Enter price of three items: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Final Price 1 = %f\n", price[0] + 0.18 * price[0]);
    printf("Final Price 2 = %f\n", price[1] + 0.18 * price[1]);
    printf("Final Price 3 = %f\n", price[2] + 0.18 * price[2]);

    return 0;
}
*/

// 40. Write a function to count the number of odd numbers in an array
/*
#include <stdio.h>

int countOddNumbers(int arr[], int n);

int main()
{
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", countOddNumbers(arr, n));
 
    return 0;
}

int countOddNumbers(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count = count + 1;
        }
    }
    return count;
}
*/

// 41. int arr[] = {1, 2, 3, 4, 5}; For the given array, what will the following give ?
/*
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // a. *(arr + 2) => 3
    printf("%d\n", *(arr + 2));

    // b. *(arr + 5) => garbage value
    printf("%d\n", *(arr + 5));

    return 0;
}
*/

// 42. Write a function to reverse an array
// my solution
/*
#include <stdio.h>

void reverseArray(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArray(arr, 10);    
    
    return 0;
}

void reverseArray(int arr[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}
*/
// video solution (first ko last ke sath, second ko second last ke sath and so on, exchange kar do)
/*
#include <stdio.h>
void reverseArray(int arr[], int n);
void printReversedArray(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5); // call by reference 
    printReversedArray(arr, 5);   
    return 0;
}

void reverseArray(int arr[], int n)
{
    for(int i = 0; i < n/2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - i - 1];
        arr[i] = secondValue;
        arr[n - i - 1] = firstValue;
    }
}

void printReversedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
*/

// 43. Write a program to store the first n fibonacci numbers 
/*
#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13 ...
// nth = (n-1)th + (n-2)th
int main()
{
    int n;
    printf("Enter n (n>1): ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t", fib[0], fib[1]);

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t", fib[i]);
    }

    return 0;
}
*/

// 44. Create a 2D array, storing the tables of 2 and 3
/*
#include <stdio.h>

void storeTables(int arr[][10], int n, int m, int number);
// for 2D array, 1st dimension is treated as a pointer but the second dimension is treated as an array, hence we have declared the size of the 2nd dimension arr[][10]

int main()
{
    int tables[2][10];
    // 2 rows for storing tables of 2 and 3
    // 2 arrays hai aur 1 array ka size 10 hai
    
    storeTables(tables, 0, 10, 2); // 0 implies row, 10 implies number of columns
    storeTables(tables, 1, 10, 3); // 1 implies row, 10 implies number of columns

    for(int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }

    return 0;
}

void storeTables(int arr[][10], int n, int m, int number)
{
    for(int i = 0; i < m; i++) // loop will iterate from 0 to 9
    {
        arr[n][i] = number * (i+1);
    }
}
*/

// 45. Create a string firstName and lastName to store details of user and print all the characters using a loop
/*
#include <stdio.h>

void printString(char arr[]);

int main()
{
    char firstName[] = "Tanaya";
    char lastName[] = "Saxena";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/

// 46. Ask the user to enter their firstName and print it back to them. Also try this with their fullName.
//#include <stdio.h>

//int main()
//{
    /* Part 1
    char firstName[10];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Your first name is %s.", firstName); */

    /* Part 2 (incorrect, only the first word, before space, is printed on the screen)
    char fullName[20];
    printf("Enter your full name: ");
    scanf("%s", fullName);
    // scanf cannot input multi-word strings with spaces (drawback of scanf) 
    printf("Your full name is %s.", fullName); */

    /* STRING FUNCTIONS:
    1. gets(stringName); -> input a string (even multi-word), dangerous & outdated
    2. puts(stringName); -> output a string
    3. fgets(stringName, sizeOfString, fileName or stdin(standard input)); -> stops when n-1 chars input or new line is entered */

    /* Part 2 (correct)
    char fullName[100];
    // gets(fullName);
    fgets(fullName, 100, stdin);
    puts(fullName); */

//    return 0;
//}

// 47. Make a program that inputs user's name and prints its length.
/*  
    T a n a y a \0
    1 2 3 4 5 6 7
        
    7 for \0, length = 6 should be printed 
*/
/*
#include <stdio.h>

int countLength(char arr[]);

int main()
{
    char userName[100]; // enter first name for simplicity
    printf("Enter userName: ");
    fgets(userName, 100, stdin);
    
    printf("Length is %d", countLength(userName));

    return 0;
}

int countLength(char arr[])
{
    int count = 0;
    for (int i = 1; arr[i] != '\0'; i++)
    {
        count++;
    }
 
    return count;
}
*/

// 48. Take a string input from the user using %c (ek ek character lekar string ke andar add karte jana hai)
/*
#include <stdio.h>

int main()
{
    char string[100];
    char ch;
    int i = 0;
    printf("Enter a string: ");

    // below while loop function works as gets or fgets
    while(ch != '\n') // jab tak enter press nahi karte tab tak character input lete raho
    {
        scanf("%c", &ch);
        string[i] = ch;
        i++;
    }
    
    string[i] = '\0';
    puts(string);

    return 0;
}
*/

// 49. SALTING: Find the salted form of a password entered by user if the salt is "123" and added at the end.
/* Salting is a technique used by companies to secure the passwords from hacking,
userPassword mein, salt ki tarah (randomly kahi bhi), company ke dwara di hui string ko add karte hai, phir company woh final password apne pas store karti hai
Eg. password = "test123", salt = "abc"
test"abc"123 (final password) */
/*
#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main()
{
    char password[100];
    printf("Enter password: ");
    scanf("%s", password);

    salting(password);

    return 0;
}

void salting(char password[])
{
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword, password);
    strcat(newPassword, salt);

    puts(newPassword);
}
*/

// 50. Write a function named slice, which takes a string and returns a sliced string from index n to m.
/*
#include <stdio.h>
#include <string.h>

void sliceFunction(char string[], int n, int m);

int main()
{
    char string[100];
    int n, m;

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter starting & ending index: ");
    scanf("%d %d", &n, &m);

    sliceFunction(string, n, m);

    return 0;
}

void sliceFunction(char string[], int n, int m)
{
    char slicedString[100];
    int j = 0;

    for(int i = n; i <= m; i++)
    {
        slicedString[j] = string[i];
        j++;
    }

    slicedString[j] = '\0';
    puts(slicedString);
}
*/

// 51. Write a function to count the occurence of vowels in a string.
/*
#include <stdio.h>

int countVowels(char string[]);

int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);

    printf("Total number of vowels in the given string is %d.", countVowels(string));
    return 0;
}

int countVowels(char string[])
{
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            count++;
        }
    }

    return count;
}
*/

// 52. Check if a given character is present in a string or not.
/*
#include <stdio.h>

void checkCharacter(char string[], char ch);

int main()
{
    char string[] = "TanayaSaxena";
    
    char ch = 'a';
    checkCharacter(string, ch);
    
    printf("\n");

    ch = 'b';
    checkCharacter(string, ch);

    return 0;
}

void checkCharacter(char string[], char ch)
{
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == ch)
        {
            printf("Character is present!");
            return;
        }
    }

    printf("Character is not present.");
}
*/

// 53. Write a program to store the data of 3 students.
/*
#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    strcpy(s1.name, "Tanaya");
    s1.roll = 1695;
    s1.cgpa = 8.2;
    
    struct student s2;
    strcpy(s2.name, "Lakshya");
    s2.roll = 1696;
    s2.cgpa = 9.2;
    
    struct student s3;
    strcpy(s3.name, "Madhvi");
    s3.roll = 1697;
    s3.cgpa = 9.5;

    printf("studentName1: %s, Roll: %d, CGPA: %f\nstudentName2: %s, Roll: %d, CGPA: %f\nstudentName3: %s, Roll: %d, CGPA: %f", s1.name, s1.roll, s1.cgpa, s2.name, s2.roll, s2.cgpa, s3.name, s3.roll, s3.cgpa);

    return 0;
}
*/

// 54. Enter address (house number, block, city, state) of 5 people.
/*
#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int blockNo;
    char city[50];
    char state[50];
};

void printAddress(struct address add);

int main()
{
    struct address p[5];

    printf("Enter address of person 1: ");
    scanf("%d", &p[0].houseNo);
    scanf("%d", &p[0].blockNo);
    scanf("%s", p[0].city);
    scanf("%s", p[0].state);
    
    printf("Enter address of person 2: ");
    scanf("%d", &p[1].houseNo);
    scanf("%d", &p[1].blockNo);
    scanf("%s", p[1].city);
    scanf("%s", p[1].state);
    
    printf("Enter address of person 3: ");
    scanf("%d", &p[2].houseNo);
    scanf("%d", &p[2].blockNo);
    scanf("%s", p[2].city);
    scanf("%s", p[2].state);
    
    printf("Enter address of person 4: ");
    scanf("%d", &p[3].houseNo);
    scanf("%d", &p[3].blockNo);
    scanf("%s", p[3].city);
    scanf("%s", p[3].state);
    
    printf("Enter address of person 5: ");
    scanf("%d", &p[4].houseNo);
    scanf("%d", &p[4].blockNo);
    scanf("%s", p[4].city);
    scanf("%s", p[4].state);

    printAddress(p[0]);
    printAddress(p[1]);
    printAddress(p[2]);
    printAddress(p[3]);
    printAddress(p[4]);

    return 0;
}

void printAddress(struct address add)
{
    printf("Address: %d %d %s %s\n", add.houseNo, add.blockNo, add.city, add.state);
}
*/

// 55. Create a structure to store 2-D vectors. Then make a function to return sum of 2 vectors.
/*
#include <stdio.h>

struct vector
{
    int x;
    int y;
};

void sumVector(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {2, 4};

    struct vector sum = {0};

    sumVector(v1, v2, sum);

    return 0;
}

void sumVector(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x: %d\n", sum.x);
    printf("Sum of y: %d\n", sum.y);
}
*/

// 56. Create a structure to store complex numbers (use arrow operator)
/*
#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
};

int main()
{
    struct complex z = {5, 10};
    struct complex *ptr = &z;

    printf("%d+i%d", ptr->real, ptr->imaginary);

    return 0;
}
*/

// 57. Make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.
/*
#include <stdio.h>
#include <string.h>

typedef struct bankDetails
{
    char name[50];
    int accountNumber;
} abc;

int main()
{
    abc c1 = {"Tanaya", 1205};
    printf("Account Holder: %s, Account Number: %d", c1.name, c1.accountNumber);

    return 0;
}
*/

// 58. Make a program to read 5 integers from a file.
/*
#include <stdio.h>

int main()
{
    FILE *fptr;
    
    fptr = fopen("sample.txt", "r");
    
    int i;
    fscanf(fptr, "%d", &i);
    printf("%d", i);
    fscanf(fptr, "%d", &i);
    printf("%d", i);
    fscanf(fptr, "%d", &i);
    printf("%d", i);
    fscanf(fptr, "%d", &i);
    printf("%d", i);
    fscanf(fptr, "%d", &i);
    printf("%d", i);

    fclose(fptr);

    return 0;
}
*/

// 59. Make a program to input student informtaion from a user and enter it to a file.
/*
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Student.txt", "w");
    
    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f", cgpa);

    fclose(fptr);

    return 0;
}
*/

// 60. Write a program to write all the odd numbers from 1 to n in a file.
/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("Sample.txt", "w");

    for(int i = 0; i <= n; i++)
    {
        if(i%2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);

    return 0;
}
*/

// 61. 2 numbers - a & b, are written in a file. Write a program to replace them with their sum. 
/*
#include <stdio.h>

int main()
{
    int a, b;

    FILE *fptr;
    fptr = fopen("sample.txt", "r");

    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("sample.txt", "w");
    fprintf(fptr, "Sum: %d", a + b);

    return 0;
}
*/

// 62. WAP to allocate memory to store 5 prices.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 25.5;
    ptr[1] = 35.5;
    ptr[2] = 45.5;
    ptr[3] = 55.5;
    ptr[4] = 65.5;

    for(int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}
*/

// 63. WAP to allocate memory of size n, where n is entered by the user.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
*/

// 64. In ques. 63, free the memory allocated with calloc.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int*) calloc(1, sizeof(int));

    for(int i = 0; i < 1; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
*/

// 65. Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);

    printf("Enter 8 numbers: ");

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 8; i++)
    {
        printf("Number %d is %d\n", i, ptr[i]);
    }
    return 0;
}
*/

// 66. Create an array of size 5 (using calloc) and enter its values from the user.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        printf("Number %d is %d\n", i, ptr[i]);
    }
    
    return 0;
}
*/

// 67. Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    ptr = realloc(ptr, 6);

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for(int i = 0; i < 6; i++)
    {
        printf("Number %d is %d\n", i, ptr[i]);
    }

    return 0;
}

// Happy Coding!