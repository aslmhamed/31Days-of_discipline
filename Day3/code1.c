// C Program to Illustrate the Fixed Size Properties of the
// Array
#include <stdio.h>
 
int main()
{
 
    // creating a new array of size 5
    int array[5] = { 1, 2, 3, 4, 5 };
 
    printf("Size of Array Before: %d\n",
           sizeof(array) / sizeof(int));
 
    // trying to increase the size of the array
    array[6];
    // not checking the size
    printf("Size of Array After: %d",
           sizeof(array) / sizeof(int));
 
    return 0;
}
