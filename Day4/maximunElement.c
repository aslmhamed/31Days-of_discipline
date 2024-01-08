#include <stdio.h>

/**
 * find_max_element - Find the maximum element in an array
 * @arr: The input array
 * @size: Size of the array
 * Return: Maximum element
 */

int find_max_element(int arr[], int size) 
{
    int max = arr[0];
    for (int i = 1; i < size; ++i) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    return max;
}

void main() 
{
    int arr[] = {12, 56, 23, 89, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element: %d\n", find_max_element(arr, size));
    return 0;
}
