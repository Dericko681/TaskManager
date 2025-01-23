
#include "header.h"



// the shuffling function

int main()
{
    char names[NUM_NAMES][NAME_LENGTH];

    get_names(names);
    srand(time(NULL));

    shuffle(names, NUM_NAMES);
    shuffle(names, NUM_NAMES);
    // for
    printf("\nChore Assignments:\n");
    printf("Bin: %s\n", names[0]);
    printf("Tank: %s, %s\n", names[1], names[2]);
    printf("Front yard and backyard (gutters too): %s, %s, %s, %s\n", names[3], names[4], names[5], names[6]);
    printf("Toilets and corridor: %s, %s, %s, %s, %s, %s\n", names[7], names[8], names[9], names[10], names[11], names[12]);
    printf("Pallor: %s, %s, %s, %s, %s\n", names[13], names[14], names[15], names[16], names[17]);

    return 0;
}