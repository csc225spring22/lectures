#include <stdio.h>

/* To declare a function that takes two integer pointers: */
void swap(int *, int *);

int main(void) {
    int z = 1, w = 2;
    swap(&z, &w);

    printf("%p (z): %d\n", (void *)(&z), z);
    printf("%p (w): %d\n", (void *)(&w), w);
}

/* To define a function that takes two integer pointers: */
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("%p (x): %p\n", (void *)(&x), (void *)x);
    printf("%p (y): %p\n", (void *)(&y), (void *)y);
}
