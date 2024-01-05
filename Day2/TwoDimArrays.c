#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
    yesterday i learnd what an array is and what is 1D Arrays,
    so let`s start by a simple 1D array
    */

    int arr_1day[5] = {10, 20, 30, 40, 50,}; /* Definig the array. */

    for(int i =0; i < 5; i++)
    {
        printf("%d \n", arr_1day[i]); // a simple example of printing the elements of the array
    }

    // now let`s define the 2D arrays.

    int arr_2D[2][3] = {10, 20, 30, 40, 50, 60};

    printf("2D Array:\n");

    // printing 2d array

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",arr_2D[i][j]);
        }
        printf("\n");
    }


    return (0);


}

