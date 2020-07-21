#include <stdio.h>

// Compile Test: 
// > gcc bitwise.c -o bitwise
//
enum
{
    apple     = 1 << 0,
    orange    = 1 << 1,
    banana    = 1 << 2,
    pineapple = 1 << 3
};

int main(void)
{
    // Init
    int vase = 0;

                                         printf("---------------------------------------\n");

    // Init vase to hold apple + orange
    vase = apple | orange;               printf("added apple + orange     => vase = (%i)\n", vase);

    // Now adding banana + pineapple
    vase |= banana | pineapple;          printf("added banana + pineapple => vase = (%i)\n", vase);

                                         printf("---------------------------------------\n");
    // Is vase containing orange ?
    printf("Is vase containing orange ? %s\n", (vase & orange) == orange ? "Yes" : "No");

    // Remove orange from vase
    vase &= ~orange;
    printf("Removed orange  => vase = (%i)\n", vase);

                                         printf("---------------------------------------\n");
    // Is vase still containing orange now ?
    printf("Is orange in vase now ?   (%s)\n", (vase & orange) == orange ? "Yes" : "No");

                                         printf("---------------------------------------\n");

    // That's all about storing multiple enum in a single value.
    // @thetrung 2020
    //
}