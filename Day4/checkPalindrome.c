#include <stdio.h>
#include <stdbool.h>

/**
 * is_palindrome - Check if an array is a palindrome
 * @arr: The input array
 * @size: Size of the array
 * Return: true if palindrome, false otherwise
 */

bool is_palindrome(int arr[], int size) 
{
    int start = 0, end = size - 1;
    while (start < end) 
	{
        if (arr[start] != arr[end]) 
		{
            return false;
        }
        ++start;
        --end;
    }
    return true;
}

void main() 
{
    int arr1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Array 1 is %s\n", is_palindrome(arr1, size1) ? "a palindrome" : "not a palindrome");

    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Array 2 is %s\n", is_palindrome(arr2, size2) ? "a palindrome" : "not a palindrome");

    return 0;
}
