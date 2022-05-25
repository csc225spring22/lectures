#include <stdio.h>

int *mkarr(int n) {
    int arr[n];

    return arr;
}

int main(void) {
    int *arr = mkarr(4);

    printf("arr (%p): %p\n", (void *)(&arr), (void *)arr);
    printf(" |-- %p:  %d\n", (void *)(&arr[0]), (arr[0]));
    printf(" |-- %p:  %d\n", (void *)(&arr[1]), (arr[1]));
    printf(" |-- %p:  %d\n", (void *)(&arr[2]), (arr[2]));
    printf(" +-- %p:  %d\n", (void *)(&arr[3]), (arr[3]));

    return 0;
}

