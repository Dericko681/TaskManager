// #include "get_names.h"
#include "header.h"

void get_names(char names[NUM_NAMES][NAME_LENGTH])
{
    //char names[NUM_NAMES][NAME_LENGTH];

    printf("Enter 18 names:\n");
    for (int i = 0; i < NUM_NAMES; i++)
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], NAME_LENGTH, stdin);
        // remove the newline chacter from fgets
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    
}
