#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  // no let`s go to the 3D Arrays
  // can be defined like the 2D and 1D arrays

 // 3D array declaration
    int arr_3D[2][2][2] = { 10, 20, 30, 40, 50, 60 };
 
    // printing elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr_3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n \n");
    }
    
    return (0);
}

