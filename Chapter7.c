// ARRAY: collection of similar datatypes stored at contiguous/continuous memory locations
//#include <stdio.h>
//int main()
//{
    /*
    int marks1 = 98;
    int marks2 = 92;
    int marks3 = 90;
    // above statements can be written as below statement in the form of an array
    int marks[] = {98, 92, 90}; // array created
    */

    /* SYNTAX FOR AN ARRAY
        1. int marks[5];
           dataType variable[sizeOfArray];
        2. sizeOfArray: kitni values store karvani hai
        3. marks naam se memory location mein 5 boxes reserved ho gaye hai, ek box ka size is equal to int ka size, that is, 4 bytes
        4. 0 based indexing: first box/position ko 0 se denote karenge, second box/position ko 1 se denote karenge and so on
    */

    /*  INPUT
            scanf("%d", &marks[3]);
        marks wale array mein index number 3 (box 4) mein input ko store karna hai

        OUTPUT
            printf("%d", marks[0]);
        index number 0 (box 1) se data lekar screen pe print karna hai
    */

    /*
    int marks[3]; // marks[3]: declaring the size, which is 3

    printf("Enter marks in Physics: ");
    scanf("%d", &marks[0]); // &marks[0]: using the index number (0) to store data in marks

    printf("Enter marks in Chemistry: ");
    scanf("%d", &marks[1]);

    printf("Enter marks in Mathematics: ");
    scanf("%d", &marks[2]);

    printf("Marks Obtained:\nPhysics = %d, Chemistry = %d, Mathematics = %d\n", marks[0], marks[1], marks[2]);

    // runtime error: agar array mein already declare kiye hue size se zada size le liya toh program abort ho jayega, for example:
    printf("Enter marks in Biology: ");
    scanf("%d", &marks[3]);
    */

    /* INITIALIZATION OF ARRAY
    int marks[] = {98, 91, 90}; // RHS will tell the size of the array
    // OR
    int marks[3] = {98, 91, 90}; // size is already declared here
    // both are correct
    // total memory reserved in this case = 3 boxes * 4 byte (int) = 12 bytes
    */


    // POINTER ARITHMETIC: 1. pointers can be incremented and decremented

    /* case 1
    int age = 21;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    // here int (4 bytes) data type is used, hence ptr++ means ptr = ptr + sizeOfDatatype = ptr + 4, ptr will start pointing towards the next memory location (original memory location + 4)
    printf("%u\n", ptr);
    ptr--;
    // here int (4 bytes) data type is used, hence ptr-- means ptr = ptr - sizeOfDatatype = ptr - 4, hence here it comes back to its actual position or original memory location
    printf("%u\n", ptr);
    */

    /* case 2
    float price = 100.00;
    float *ptr = &price;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    // int and float both takes 4 bytes of space in 64 bit architecture
    */

    /* case 3
    char star = '*';
    char *ptr = &star;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    // char takes 1 byte of space in 64 bit architecture
    */

    /* POINTER ARITHMETIC
        2. we can subtract one pointer from another pointer
        // jab bhi 2 pointers ka difference lenge dono pointers same datatype ke honge
        // difference number ka nahi aata hai, datatype ka difference aata hai

        3. we can compare 2 pointers (output will be either true(1) or false(0))

    int age = 21;
    int _age = 22;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("ptr = %u\n_ptr = %u\n", ptr, _ptr);
    printf("Difference = %u\n", ptr - _ptr); // difference of value = 4 bytes
    // this shows ki dono ke andar kitne int ka difference hai, that is, 1 (here)

    _ptr = &age; // ptr mein age ka address stored hai, _ptr mein bhi age ka address store karva rahe hai taaki compare kar paye ki ptr = _ptr hai ya nahi
    printf("Comparison = %u\n", ptr == _ptr);
    */


    /* ARRAY IS A POINTER 
        int *ptr = &arr[0];
        int *ptr = arr;
        // both the above statements are same
        // array ka jo naam hota hai (here, arr) woh ek pointer hota hai jo ki array ki index 0 pe point karta hai, that is, usme 0th index ka address stored hota hai
    */

    // TRAVERSE AN ARRAY
    /*
    int aadhar[5];
    
    // input
    int *ptr = &aadhar[0];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter value for index %d = ", i);
        scanf("%d", (ptr + i));
        // OR
        scanf("%d", &aadhar[i]);
    }

    // output
    for(int i = 0; i < 5; i++)
    {
        printf("At index %d value is %d\n", i, *(ptr + i));
        // OR
        printf("At index %d value is %d\n", i, aadhar[i]);
    }
    // When we write ptr + i, it means "start from the memory address stored in ptr and move i steps forward, where each step is the size of an integer."
    */

    // ARRAYS AS FUNCTION ARGUMENT
    
    /* function declaration:
    void printNumbers(int arr[], int n);
    OR
    void printNumbers(int *arr, int n);
    */
    
    /* function call:
    printNumbers(arr, n);
    */

//    return 0;
//}

/*
void printNumbers(int arr[], int n);

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    printNumbers(arr, n);
    
    return 0;
}

void printNumbers(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]); // \t: gives space equal to a tab
    }
}
*/

/* MULTI-DIMENSIONAL ARRAYS:
2-D Array (visualized in the form of a matrix but stored in the memory as an array)

declare:
int arr[][] = {{1, 2}, {3, 4}};

access:
arr[0][0] => 1
arr[0][1] => 2
arr[1][0] => 3
arr[1][1] => 4

logically it is a matrix:

    (0, 0)  (0, 1)
    1       2           => array 1

    (1, 0)  (1, 1)
    3       4           => array 2

in memory it will be stored as:

    (0, 0)  (0, 1)  (1, 0)  (1, 1)
    1       2       3       4
*/

/*
#include <stdio.h>
int main()
{
    // 2 students, 3 subject's marks
    int arr[2][3] = {{98, 91, 90}, {84, 82, 81}};
    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[0][1]);
    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[1][0]);
    printf("%d\n", arr[1][1]);
    printf("%d\n", arr[1][2]);

    return 0;
}
*/