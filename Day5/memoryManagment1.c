#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char name[100];
    char *description;
    
    strcpy(name, "Aslm Hamed");
    
    /* allocates memory dynamically */
    description = malloc(200 * sizeof(char) ); /* I can also use calloc instead of malloc*/
    
    /*either is good */
    /*description = calloc(200, sizeof(char));*/
    
    if (description == NULL )
    {
        fprintf(stderr, "Error - Unable to allocate the required memory!\n");
    }
    else
    {
        strcpy(description, "Aslm Hamed goes to Cs and Ai College!\n");

    }
    printf("Name: %s\n", name);
    printf("Description: %s\n", description);


    return (0);
}

