#include <stdio.h>
#include <stdlib.h>

int *mkarr(int n) {
    int *arr;

    /* To dynamically allocate space for "n" integers on the heap: */
    arr = (int *)malloc(sizeof(int) * n);

    return arr;
}

int main(void) {
    int *arr = mkarr(4);

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;
    arr[3] = 8;

    printf("arr (%p): %p\n", (void *)(&arr), (void *)arr);
    printf(" |-- %p:  %d\n", (void *)(&arr[0]), (arr[0]));
    printf(" |-- %p:  %d\n", (void *)(&arr[1]), (arr[1]));
    printf(" |-- %p:  %d\n", (void *)(&arr[2]), (arr[2]));
    printf(" +-- %p:  %d\n", (void *)(&arr[3]), (arr[3]));

    /* To deallocate space on the heap:
     * NOTE: The compiler won't deallocate heap memory for us; we dynamically
     *       allocated it; we are responsible for deallocating it. */
    free(arr);

    return 0;
}

