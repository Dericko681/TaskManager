#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_NAMES 18
#define NAME_LENGTH 50

void shuffle(char names[NUM_NAMES][NAME_LENGTH], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        char temp[NAME_LENGTH];
        strcpy(temp, names[i]);
        strcpy(names[i], names[j]);
        strcpy(names[j], temp);
        // printf("%s ", names[i]);
    }
}