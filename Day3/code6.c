// C Program to check the random access property of the
// array
#include <stdio.h>
 
int main()
{
 
    // creating an array of 5 elements
    int arr[5] = { 1, 2, 3, 4, 5 };
 
    // address of first element
    int* ptr = &arr[0];
 
    // printing arr[3]
    printf("Array[3]: %d\n", arr[3]);
 
    // printing element at index 3 using ptr
    printf("Array[3] using pointer to first element = %d",
           *(ptr + 3));
 
    return 0;
}
