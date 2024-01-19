#include <stdio.h>
#include <stdlib.h>


void main()
{
  int size, newSize; /* Declaring a variable called size to get the size of the array*/
  int *arr; /* Declaring a pointer to an integer array called arr */

  printf("Enter the size of the array: ");
  scanf("%d", &size); /* getting the size of the array from the user.*/

  arr = (int *)malloc(size * sizeof(int)); /* Allocating memory for the array using malloc() function and storing the pointer in the arr variable.*/

  if (arr == NULL) 
  {
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter %d Elements for the array: ", size); /* Getting the elements of the array from the user */

  for (int i = 0; i < size; i++) 
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]); /* Printing the elements of the array */
  }
  /* Asking the user for the new size of the array */
  printf("Enter the new size: ");
  scanf("%d", &newSize);

  /* Resizing the array using realloc */
  arr = (int*)realloc(arr, newSize * sizeof(int));

  /* Checking if the memory reallocation was successful */
  if (arr == NULL)
  {
      printf("Memory allocation failed...\n");
      free(arr); /*release the memory before exiting*/
      return 1;
  }

  /* Display the resized array.*/
  printf("The resized array is:");
  for (int i = 0; i < newSize; i++)
  {
      printf("%d ", &arr[i]);
  }
  printf("\n");

  /* free the allocated memory */
  free(arr);

  return (0);
}

