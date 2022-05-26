#include <stdlib.h>

int main(void) {
    /* NOTE: Unless later freed, this is a memory leak of 16 bytes. It likely
     *       won't cause any fatal errors, but can be caught with Valgrind. */
    int *arr = (int *)malloc(sizeof(int) * 4);

    free(arr);

    return 0;
}
