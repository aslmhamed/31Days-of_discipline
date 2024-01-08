#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char name[100];
    char *description;
    
    strcpy(name, "Aslm Hamed");
    
    /* allocates memory dynamically */
   /* description = malloc(200 * sizeof(char) );*/ 
    
    /* allocating using calloc*/
    description = calloc(40, sizeof(char));
    
    if (description == NULL )
    {
        fprintf(stderr, "Error - Unable to allocate the required memory!\n");
    }
    else
    {
        strcpy(description, "Aslm Hamed goes to CS and AI College!\n");

    }
    /* Reallocating memory */
    description = realloc(description, 100 * sizeof(char))
    
    if (description == NULL)
    {
        fprintf(stderr, "Error - Unable to allocate the required memory!\n")
    }
    else
    {
        strcat(description, "He's also a ALXSE Student.\n")
    }
    
    printf("Name: %s\n", name);
    printf("Description: %s\n", description);

