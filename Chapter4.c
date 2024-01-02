// loop control instructions: to repeat some parts of the program
// 3 types: 1. for, 2. while, 3. do-while and 2 keywords: break and continue

/* 1. for loop

for (initialisation; condition; updation)
{
    // write code for "for block"
}

// initialisation: start from here, condition: when to end the loop
// initialisation -> condition check -> loop ke andar and execute (if condition satisfies)-> updation of the variable -> (initialisation pe wapas nahi jayega ab kabhi, bs start karne pe jata hai) phise condition check -> loop ke andar and execute (if condition satisfies) otherwise loop se bahar nikal jayega 

*/

#include <stdio.h>
int main()
{
    // i: iterator or counter variable: ek aisa variable jiski help se kisi kaam ko baar baar karva rahe hai
    /*
    for (int i = 1; i <= 100; i = i+1) // prints 1-100 numbers
    {
        printf("%d \n", i);
    }

    for (int j = 10; j >= 1; j = j - 1) // prints 1-10 in decreasing order 
    {
        printf("%d \n", j);
    }
    */

    // increment operator: i++ (post increment operator, value of i: use then increase by 1) and ++i (pre increment operator, value of i: increase by 1 then use)
    /*
    int i = 1;
    printf("%d \n", i++); // i first used and then incremented by 1
    printf("%d \n", i);

    printf("%d \n", ++i); // i first incremented by 1 and then used
    */

    // decrement operator: i-- (post decrement operator) and --i (pre decrement operator)
    /*
    int i = 4;
    printf("%d \n", i--); // output: 4
    printf("%d \n", i); // output: 3

    printf("%d \n", --i); // output: 2
    */

    // loop counter can also be float or character
    /*
    for (float i = 1.0; i <= 5.0; i++) // here loop counter is a float
    {
        printf("%f \n", i);
    }

    for (char ch = 'A'; ch <= 'Z'; ch++) // here loop counter is a character
    {
        printf("%c \n", ch);
    }
    */

    // infinite loop: tab tak chalega jab tak computer ki memory full na ho jaaye, memory full hone ke baad iski wajah se program crash kar jata hai
    /*
    for (int i = 0; ; i++)
    {
        printf("%d \n", i);
    }
    */

/* 2. while loop

while (condition) // if condition is true, compiler enters the block and run the code 
{
    // do something
}

*/
    /*
    int i = 1; // initialisation
    while (i <= 5) // condition
    {
        printf("%d \n", i);
        i++; // updation
    }
    */

/* 3. do-while loop: while ki condition true ya false kuch bhi ho, usse pahle atleast ek baar run kare code do mein (pahle kaam hoga phir condition check hogi) 

do
{
    // do something
}
while (condition);

*/             
    
    /*
    int i = 1; // initialisation
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= 5);
    */
    

// break statement: exits the loop, break nested loop se bhi bahar nikaal deta hai
    /*
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break; // pure for loop se bahar nikal gaye 
        }
        printf("%d \n", i);
    }
    printf("End");
    */

// continue statement: skips to next iteration (abhi wala kaam rokna hai, aage wala kaam shuru kar do)
    /*
    for(int i = 1; i <= 5; i++)
    {
        if(i == 3)
        {
            continue; // skips 3 and prints the other numbers 
        }
        printf("%d \n", i);
    }
    */         

    return 0;
}