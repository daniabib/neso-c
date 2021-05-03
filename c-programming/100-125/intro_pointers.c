#include <stdio.h>
/*  Pointers are special values that is capable of storing some ADDRESS.
    It point to a memory location where the first byte is stored.
    SYNTAX: data_type *pointer
    data_type refers to the typeof value that the pointer will point to. */

int main()
{
    int x = 2;
    int *ptr; // declaring a pointer
    ptr = &x; // initializing the pointer -- & give the adress of x, not the value.

    int y = 5, *ptr_two = &y; // Equivalent of the 3 lines above

/*  Value of operator (dereference operator, or indirection operator), *,
    is an operator that is used to access the values stored at the location pointed
    by the pointer 
    
    We can also change the value of object pointed by the pointer */
    printf("%d\n", x); // 2 
    *ptr = 10;

    printf("%d\n", *ptr); // 10
    printf("%d\n", x); // 10 
    // ptr = 4; // warning
    // printf("%d\n", ptr); // warning

    int *p_test;            // Apply * operator to an uninitialized pointer cause undefined behaviour    
    printf("%d\n", *p_test);  // print 1 (undefined behaviour)

    // Assign a value to uninitialized pointer causes Segmentaion Fault
    *p_test = 22;  // p_test don't point to any legal location
    printf("%d\n", *p_test);
    printf("print adress of p_test: %d", &p_test);
    return 0;
}



