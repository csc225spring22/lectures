#include <stdio.h>

void foo(int *ptr) {
    *ptr = 5;
}

void bar(int *ptr) {
    foo(ptr);
}

int main(void) {
    int *ptr = NULL;

    bar(ptr);

    return 0;
}
