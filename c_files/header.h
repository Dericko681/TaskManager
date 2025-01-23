#ifndef GET_NAMES_H
#define GET_NAMES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_NAMES 18
#define NAME_LENGTH 50
void get_names(char names[NUM_NAMES][NAME_LENGTH]);
void shuffle(char names[NUM_NAMES][NAME_LENGTH], int n);

#endif