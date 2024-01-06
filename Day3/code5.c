// C Program to Verify the Contiguous Storage of Elements in
// an Array
#include <stdio.h>
 
int main()
{
 
    // creating an array of 5 elements
    int arr[5] = { 1, 2, 3, 4, 5 };
 
    // defining pointers to 2 consecutive elements
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[2];
 
    // printing the address of arr[1] and arr[2]
    printf("Address of arr[1] : %p\n", ptr1);
    printf("Address of arr[2] : %p", ptr2);
 
    return 0;
}
