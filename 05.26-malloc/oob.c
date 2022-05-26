#include <stdlib.h>

int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 4);

    arr++;

    /* After incrementing the pointer, this index is now out-of-bounds: */
    arr[3] = 2;

    /* After incrementing the pointer, it is no longer an address returned by
     *  "malloc", and "free" won't know how to deallocate it: */
    free(arr);

    return 0;
}
