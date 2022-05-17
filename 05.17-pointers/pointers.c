#include <stdio.h>

int main(void) {
    /* To declare a pointer to an integer:
     * NOTE: Like all other variables, pointers are not automatically
     *       initialized. Here, "ptr" is initialized to an invalid address. */
    int *ptr = NULL;
    /* To declare an ordinary integer: */
    int x = 1;

    /* To avoid dereferencing "ptr" if it does not contain a valid address: */
    if (ptr != NULL) {
        *ptr = 3;
    }

    /* To point "ptr" to "x": */
    ptr = &x;

    /* To "dereference" the pointer "ptr", thereby accessing "x": */
    if (ptr != NULL) {
        *ptr = 2;
    }

    /* To print out a pointer: */
    printf("%p: %d\n", (void *)ptr, x);

    return 0;
}
