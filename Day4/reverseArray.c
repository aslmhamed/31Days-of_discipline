#include <stdio.h>

/**
 * reverse_array - Reverse the elements in an array
 * @arr: The input array
 * @size: Size of the array
 */

void reverse_array(int arr[], int size) 
{
    int start = 0, end = size - 1;
    while (start < end) 
	{
        /* Swap elements at start and end indices */
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}

void main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_array(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
