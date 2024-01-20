#include <stdio.h>
#include <stdlib.h>

/* Define a struct to represent a student */
struct Student
{
  char name[50];
  int roll_no;
};
void main()
{
  /* Get the number of students from the user */
  int numStudents;
  printf("Enter the number of students: ");
  scanf("%d", &numStudents);

  /* Allocate memory for the array of students */
  struct Student *Result = (struct student *)malloc(numStudents * sizeof(struct Student));
  /*Check if the result is zero */
  if (Result == NULL)
  {
    printf("The Memory Allocation failed \n");
    return 1; /* exiting in case of allocation fail */
  }

  /* getting the input from the user */
 for (int i = 0; i < numStudents; i++)
 {
     printf("Enter the student name: ");  /* Getting the student name and saving it in name */
     scanf("%s", &Result[i].name);
     printf("Enter the student Roll.No: ");  /* Getting the roll no from the user and storing it in roll_no */
     scanf("%d", &Result[i].roll_no);
 }
  printf("Student Informations is: "); /* printing the student information each in a newline .*/
  for(int i = 0; i < numStudents; i++)
  {
      printf("Student number %d; name is : %s, and roll.no is: %d\n", i + 1, Result[i].name, Result[i].roll_no);
  }
  /* Freeing the allocated memory after execution */
  free(Result);

  return (0);
}



