#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * Description: A program initializes an array, populates it with user 
  *                 input, and prints it in reverse order.
  *  
  *  Return: (0) Always Success
  */

void main()
{
    int size;  /* Declaring a variable called size to get the size of the array*/
    printf("Enter the size of the array: ");
    scanf("%d", &size);  /* getting the size of the array from the user.*/

    int arr[size];  /* initializing the array with the size of the user input.*/

    int i;

    for(i = 0; i < size; i++)  /* populate the array with the user input using for loop*/ 
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The array in reverse order is: ");
    for (i=size; i>0; i--)
    {                       /* print the array in reverse order using for loop*/
      printf("%d ", arr[i-1]);
    }
}
