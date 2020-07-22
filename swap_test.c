#include <stdio.h>

// Compile Test: 
// > gcc swap_test.c -o swap_test
//

void swap(int* A, int* B)
{
    int temp = *A; printf("temp = *A   = (%i)\n", temp);
    *A = *B;       printf("*A   = *B   = (%i) at %p\n", *A, A);
    *B = temp;     printf("*B   = temp = (%i) at %p\n", *B, B);
}

int main(void)
{
    // Init
    int a = 5;
    int b = 10;

    printf("---------------------------------------\n");
    printf("Before swapping: (%i) - (%i) \n", a, b);

    printf("A = %p\n", &a);
    printf("B = %p\n", &b);

    printf("---------------------------------------\n");

    swap(&a, &b); // out -> a & b

    printf("---------------------------------------\n");

    printf("After swapping: (%i) - (%i) \n", a, b);

    printf("A = %p\n", &a);
    printf("B = %p\n", &b);

    printf("---------------------------------------\n");

   
    // That's how we swap things with pointer in C.
    // @thetrung 2020
    //
}