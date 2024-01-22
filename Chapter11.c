/* Dynamic Memory Allocation:
It is a way to allocate memory to a data structure during the runtime. 
Eg. ek array banaya humne 30 students ki details ke liye, now year mid mein 3 new admission hue toh we can dynamically add 3 more spaces to the same array in the runtime, wapas ek naya array of size 33 create karke purane array se 30 students ki details copy karne ki zarurat nahi hai
We can also remove spaces dynamically to preserve the resources if not in use */

/* Functions for DMA:
1. malloc(), memory allocation
2. calloc(), continuous allocation
3. free()
4. realloc(), re-allocation */

/* 1. malloc(): memory allocation, include <stdlib.h> for DMA
Takes number of bytes to be allocated and returns a pointer of type void 
(hume jitni bhi space chahiye memory mein yeh utni space ek chunk mein bytes mein reserve kar leta hai humare liye aur uss chunk ka ek pointer declare kar deta hai, hum usi pointer se access kar payenge uss memory chunk ko) 

Syntax:
ptr = (int*) malloc(5 * sizeof(int));

here, 
1. sizeof() is a function which returns size of any dataType
2. [5 * sizeof(int)] means 5 x 4 = 20 bytes of memory space will be reserved
3. malloc(5 * sizeof(int)) will return a pointer of type void
4. We need an interger type pointer, hence, we have done typecasting and changed it from a void pointer to an integer pointer, used (int*) for typecasting 
5. int* type ki memory mil gayi hai jisme 20 bytes hai aur hum usme 5 integers store karva sakte hai */

// jab humara system hume humare required number of bytes nahi de payega tab ptr mein NULL value return ho jayegi

/* 2. calloc(): continuous allocation, initializes with 0 

syntax:
ptr = (int *) calloc(5, sizeof(int)); 

here, 5 indicates ki hume kitni location chahiye and sizeof(int) indicates ki hume per location kitna size chahiye (here, int ke barabar, i.e. 4 bytes) 

calloc() will also return a void pointer and we can then typecast it according to our need */

/* 3. free(): 
compiler ko nahi pata hota hai DMA ke bare mein, it is a runtime thing 
we use it to free memory that is allocated using malloc and calloc 
jo DMA humne kiya, jab resources use nahi ho rahe hai tab we use free taki resources ko free karke save kar sake hum 

syntax:
free(ptr); */

/* 4. realloc(): re-allocation of memory 
re-allocate (increase or decrease) memory using the same pointer and size 

syntax:
ptr = realloc(ptr, newSize); */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // using sizeof()
    /*
    printf("%d\n", sizeof(int)); // 4
    printf("%d\n", sizeof(float)); // 4
    printf("%d\n", sizeof(char)); // 1
    */

    // using malloc():
    /*
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    */
    
    // using calloc():
    /*
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    */

    // using free():
    /*
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *) calloc(2, sizeof(int));

    for(int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }
    */

    return 0;
}