// C program to Demonstrate the Homogeneous Property of the
// C Array
#include <stdio.h>
 
int main()
{
 
    // declaring integer array
    int arr[3] = { 1, 2 };
 
    // trying to store string in the third element
    arr[2] = "Arrays";
 
  // printing elements
    printf("Array[1]: %d\n", arr[0]);
    printf("Array[2]: %d\n", arr[1]);
    printf("Array[3]: %s", arr[2]);
 
    return 0;
}
