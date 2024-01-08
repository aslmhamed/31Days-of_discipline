#include <stdio.h>

/**
 * sum_of_elements - Calculate the sum of elements in an array
 * @arr: The input array
 * @size: Size of the array
 * Return: Sum of elements
 */

int sum_of_elements(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; ++i) 
	{
        sum += arr[i];
    }
    return sum;
}

void main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of elements: %d\n", sum_of_elements(arr, size));
    return 0;
}
