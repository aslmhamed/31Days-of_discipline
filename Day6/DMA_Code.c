#include <stdio.h>
#include <stdlib.h>

/**
 * allocate_and_fill_array - Dynamically allocates an array of integers,
 * fills it with values, and returns a pointer to the array.
 * @size: The size of the array.
 *
 * Return: A pointer to the dynamically allocated array.
 */
int *allocate_and_fill_array(int size)
{
    int *arr = malloc(size * sizeof(int));

    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for (int i = 0; i < size; ++i)
        {
            arr[i] = i * 2;  /* Fill the array with some values (e.g., multiples of 2)*/
        }
    }
    
    free(arr);

    return arr;
}


/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
    int *dynamicArray;
    int size = 5;

    dynamicArray = allocate_and_fill_array(size);

    /* Print the elements of the array */
    for (int i = 0; i < size; ++i)
    {
        printf("Element %d: %d\n", i, dynamicArray[i]);
    }

    free_allocated_array(dynamicArray);

    return 0;
}
