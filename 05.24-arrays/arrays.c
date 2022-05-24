#include <stdio.h>

#define LENGTH 4

/* To define a function that takes an array of integers:
 * NOTE: A reference to an array is the address of its first element; arrays
 *       are passed as pointers. The length must be passed separately. */
void foo(int *arr) {
    arr[0] += 1;
}

/* To define a function that returns an array of integers:
 * NOTE: This is never safe. This is returning the address of a local variable,
 *       which is about to be deallocated. */
int *bar() {
    int arr[LENGTH] = {10, 20, 30, 40};
    return arr;
}

int main(void) {
    /* To declare an array of four integers:
     * NOTE: The length of an array must be a constant. It can't be a variable,
     *       but it can be a macro, if desired. */
    int arr[LENGTH];
    int *ptr;
    int i;

    /* To access an array of integers: */
    arr[1] = 2;
    arr[3] = 8;

    /* To access an array of integers using pointers: */
    ptr = arr;
    ptr[0] = 1;
    *(arr + 2) = 4;

    printf("arr: %p\n", (void *)arr);
    printf(" |-- %p: %d\n", (void *)(&arr[0]), arr[0]);
    printf(" |-- %p: %d\n", (void *)(&arr[1]), arr[1]);
    printf(" |-- %p: %d\n", (void *)(&arr[2]), arr[2]);
    printf(" +-- %p: %d\n", (void *)(&arr[3]), arr[3]);

    /* To iterate over an array using indices: */
    for (i = 0; i < LENGTH; i++) {
        arr[i] += 1;
    }

    printf("arr: %p\n", (void *)arr);
    printf(" |-- %p: %d\n", (void *)(&arr[0]), arr[0]);
    printf(" |-- %p: %d\n", (void *)(&arr[1]), arr[1]);
    printf(" |-- %p: %d\n", (void *)(&arr[2]), arr[2]);
    printf(" +-- %p: %d\n", (void *)(&arr[3]), arr[3]);

    /* To iterate over an array using pointers: */
    ptr = arr;
    for (i = 0; i < LENGTH; i++) {
        *ptr += 1;
        ptr++;
    }

    printf("arr: %p\n", (void *)arr);
    printf(" |-- %p: %d\n", (void *)(&arr[0]), arr[0]);
    printf(" |-- %p: %d\n", (void *)(&arr[1]), arr[1]);
    printf(" |-- %p: %d\n", (void *)(&arr[2]), arr[2]);
    printf(" +-- %p: %d\n", (void *)(&arr[3]), arr[3]);

    /* To call a function that takes an array of integers: */
    foo(arr);

    printf("arr: %p\n", (void *)arr);
    printf(" |-- %p: %d\n", (void *)(&arr[0]), arr[0]);
    printf(" |-- %p: %d\n", (void *)(&arr[1]), arr[1]);
    printf(" |-- %p: %d\n", (void *)(&arr[2]), arr[2]);
    printf(" +-- %p: %d\n", (void *)(&arr[3]), arr[3]);

    /* To call a function that returns an array of integers: */
    ptr = bar();

    printf("ptr: %p\n", (void *)ptr);
    printf(" |-- %p: %d\n", (void *)(&ptr[0]), ptr[0]);
    printf(" |-- %p: %d\n", (void *)(&ptr[1]), ptr[1]);
    printf(" |-- %p: %d\n", (void *)(&ptr[2]), ptr[2]);
    printf(" +-- %p: %d\n", (void *)(&ptr[3]), ptr[3]);

    return 0;
}
