/*  Pointers are special values that is capable of storing some ADDRESS.
    It point to a memory location where the first byte is stored.
    SYNTAX: data_type *pointer
    data_type refers to the typeof value that the pointer will point to. */

int main()
{
    int x = 2;
    int *ptr; // declaring a pointer
    ptr = &x; // initializing the pointer -- & give the adress of x, not the value.

    int y = 5, *ptry = &y; // Equivalent of the 3 lines above

    return 0;
}
