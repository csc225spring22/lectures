#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    printf("pt (%p):\n", (void *)&pt);
    printf(" |-- x (%p): %d\n", (void *)&pt.x, pt.x);
    printf(" +-- y (%p): %d\n", (void *)&pt.y, pt.y);

    return 0;
}
