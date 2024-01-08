#include <stdio.h>

/**
 * count_negative_numbers - Count the number of negative numbers in an array
 * @arr: The input array
 * @size: Size of the array
 * Return: Number of negative numbers
 */
 
int count_negative_numbers(int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; ++i) 
	{
        if (arr[i] < 0) 
		{
            ++count;
        }
    }
    return count;
}

void main() 
{
    int arr[] = {-2, 5, -1, 0, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Number of negative numbers: %d\n", count_negative_numbers(arr, size));
    return 0;
}
