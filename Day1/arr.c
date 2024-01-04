#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array Declaration is as follows

    int arr_dec1[]; // I can declare it like this without size.

    int arr_dec2[5]; //  Here i declared it with the size of 5.

    // i can also declare it with initialization

    char arr_ch[5] = {'a', 's', 'l', 'a', 'm'}; // declaring an array of characters
     
    
    //Declaring an array of numbers without size

    int arr_num[] = {1, 2, 3, 4, 5}; // the size will automatically deduced by the compiler.

    // Array Initialization after Declaration using for loop
    int arr_num2[5];
    
    for(int i = 0; i < 5; i++)
    {
        arr_num2[i] = i * 3;
    }
    
    // array declaration and initialization
    int arr[5] = { 15, 25, 35, 45, 55 };
 
    // accessing element at index 2 aka 3rd element
    printf("Element at arr[2]: %d\n", arr[2]);
 
    // accessing element at index 4 aka last element
    printf("Element at arr[4]: %d\n", arr[4]);
 
    // accessing element at index 0 aka first element
    printf("Element at arr[0]: %d", arr[0]);
    
    //changing the value of an element after declaration 
    arr[4] = 50;
    
    // printing the value after changing the element
    printf("Element at arr[4]: %d\n", arr[4]);
    
    // Array traversal using for loop
    for(int j = 0; j < 5; j++)
    {
        arr[j]; // visting each element inside the array
    
    }
    
    // array declaration and initialization
    int arr_tra[5] = { 10, 20, 30, 40, 50 };
 
    // modifying element at index 2
    arr_tra[2] = 100;
 
    // traversing array using for loop
    printf("Elements in Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr_tra[i]);
    }
    
    // One Dimensional Array
    // Declared normally
    
    int arr_dim[5]; // declaring a one dimensional array with the size of five
    
    // One Dimensional Array initilization using for loop
    
    for(int x = 0; x < 5; x++)
    {
        arr_dim[x] = x * x - 2 * x + 1;
    }
     printf("Elements of Array: ");
    // printing one dimensional array by traversing using for loop
    for (int z = 0; z < 5; z++) {
        printf("%d ", arr_dim[z]);
    }
    
    

}

