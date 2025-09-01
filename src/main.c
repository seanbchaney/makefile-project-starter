#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
#define main main_exclude
#endif

int main(void)
{
    // // Intentional crash: dereferencing a NULL pointer
    // int *p = NULL;
    // *p = 42; // This will crash in debug build (myapp_d)

    // // Memory leak: allocate but never free
    // int *leak = malloc(sizeof(int));
    // if (leak != NULL) {
    //     *leak = 999;
    //     // not freeing on purpose -> leak
    // }

    int result_add = add(5, 3);
    int result_subtract = subtract(5, 3);
    printf("Addition Result: %d\n", result_add);
    printf("Subtraction Result: %d\n", result_subtract);

    char *greeting = get_greeting("World");
    if (greeting) {
        printf("%s\n", greeting);
        free(greeting); // Free the allocated memory for the greeting
    } else {
        printf("Failed to create greeting.\n");
    }

    return 0;
}
