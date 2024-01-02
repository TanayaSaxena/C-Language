// conditional statements (2 types): if-else and switch
/* syntax for if and if-else:

if (condition) // if, is necessary
{
    // when condition is true
}
else // else, is not necessary
{
    // when condition is false 
}

*/

#include <stdio.h>
int main()
{
    /*
    int age;
    printf("Enter age: ");
    scanf("%d \n", &age);

    if (age >= 18)
    { 
        printf("Adult \n"); // contents of if "block"
        printf("They can vote. \n");
        printf("They can drive. \n");
    }
    else
    {
        printf("Not adult \n"); // contents of else "block"
    }

    printf("Thank You! \n");
    */

    /* syntax for else-if
    
    if(condition 1)
    {
        // execute this block when condition 1 is true 
    }
    else if(condition 2)
    {
        // execute this block when condition 1 is false and condition 2 is true 
    }
    .
    . //  else-if can be written as many times as required 
    .
    else
    {
        // execute this block when nothing above is true 
    }

    // yaha saare blocks ko ek dusre se fark padhta hai, agar koi ek condition/block true hai toh aage execute nahi hoga, agar alag alag condition check karni hai aur chahte hai ki kisi ek condition ko dusre condition se fark na pade toh baar baar if use karte raho

    if (condition 1)
    {
        // execute this block when condition 1 is true 
    }
    if (condition 2)
    {
        // execute this block when condition 2 is true 
    }
    .
    .
    . and so on
    
    */

    /*
    if (age > 19)
    { 
        printf("Adult \n");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teenager \n");
    }
    else
    {
        printf("Child \n");
    }
    */

// ternary operator: jab if else mein bhot zada lines ho rahi hai tab usko short karne ke liye use karte hai, used when if has only one line to be executed in its block

/* syntax for ternary operator:

condition ? doSomething if TRUE : doSomething if FALSE;
// ? this checks the condition, : if not true execute the second statement (nahi toh)

*/

    /*
    age >= 18 ? printf("Adult \n") : printf("Not Adult \n");
    */

/* syntax for switch case

switch (number/character)
{
    case c1: // do something
    break; // break ka kaam hota hai case ke baad switch se bahar nikaalna, break nahi hoga toh aage ki saari statements execute ho jayengi

    case c2: // do something
    break;

    default: // do something, upar wala kuch bhi true nahi hua toh isse execute kar do
}

// c1, c2 are constants

*/

    /*
    int day; // 1: mon, 2: tue, 3: wed, 4: thu, 5: fri, 6: sat, 7: sun
    printf("Enter day (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("Not a valid day. \n");
    }
    */

    /*
    char day; // m: mon, t: tue, w: wed, T: thu, f: fri, s: sat, S: sun
    printf("Enter day (m, t, w, T, f, s, S): ");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
        printf("Monday \n");
        break;
    case 't':
        printf("Tuesday \n");
        break;
    case 'w':
        printf("Wednesday \n");
        break;
    case 'T':
        printf("Thursday \n");
        break;
    case 'f':
        printf("Friday \n");
        break;
    case 's':
        printf("Saturday \n");
        break;
    case 'S':
        printf("Sunday \n");
        break;
    default:
        printf("Not a valid day. \n");
    }
    */

// properties of switch case: 1. cases can be in any order, 2. nested switch: switch inside switch is allowed
// nested if is also allowed, if inside if is allowed

    // example of a nested if
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Positive and ");
        if (num % 2 == 0)
        {
            printf("Even number.");
        }
        else
        {
            printf("Odd number.");
        }
    }
    else
    {
        printf("Negative number.");
    }
    
    return 0;
}