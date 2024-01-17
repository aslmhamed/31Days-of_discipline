#include <stdio.h>
#include <stdlib.h>

/**
 * I didn't want to use the fixed size of the array, but it would have been
 *more complex using dynamic array, so i just tried using the static way...
 * in the next task i will implement that DMA :) Sorry Cobby :)
 *
 *
 *
 */

#define COL1 50 
#define ROW1 50
#define COL2 50
#define ROW2 50

/**
 * matrixMul - Multiply two matrices.
 *
 * @first_matrix: First matrix.
 * @second_matrix: Second matrix.
 * @result: Resultant matrix.
 * @r1: Number of rows in the first matrix.
 * @c1: Number of columns in the first matrix.
 * @r2: Number of rows in the second matrix.
 * @c2: Number of columns in the second matrix.
 *
 * Description: This function multiplies the first_matrix by the second_matrix
 * and stores the result in the result matrix.
 */
void matrixMul(int first_matrix[ROW1][COL1],
               int second_matrix[ROW2][COL2],
               int result[ROW1][COL2],
               int r1, int c1, int r2, int c2)
{
    /* Performing matrix multiplication */
    int i, j, k;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                result[i][j] += first_matrix[i][k] * second_matrix[k][j];
            }
        }
    }
}


/**
  * main - entry point
  * Description: a program that performs operations on a 2D array,
  *             such as matrix multiplication
  *
  *  Return: (0) Always Success
  */

void main()
{
  int arows, acolumns, brows, bcolumns, i, j, k;
  int matrix1[ROW1][COL1], matrix2[ROW2][COL2], result[ROW1][COL2];
  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &arows, &acolumns);

  printf("\nEnter the number of rows and columns of the second matrix: ");
  scanf( "%d %d", &brows, &bcolumns);

  if (acolumns != brows) /* checking if the rows of the first matrix is not equal to the columns of the second matrix*/
    {
        printf( "The matrices cannot be multiplied, please try again!.\n"); /* if not equal */
       return 1; /* Terminating the process! */
    }
  else /* else, asking the use to enter the element of the first and the second matrix ...*/
  {
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            printf("Enter the element of the first matrix: ");
            scanf( "%d", &matrix1[i][j]);
        }
    }
    for (i = 0; i < brows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
        printf("\nEnter the element of the second matrix: ");
        scanf( "%d", &matrix2[i][j]);
        }
    }
  }
    /* calling the function matrixMul to multiply the two matrices !*/
    matrixMul(matrix1, matrix2, result, arows, acolumns, brows, bcolumns);
    
  /* Displaying the result after the multiplication process */
  printf("The result is : \n");
  for (i = 0; i < arows; i++)
  {
      for (j = 0; j < bcolumns; j++)
      {
          printf("%d ", result[i][j]);
      }
      printf("\n");
  }

  return 0;
}

