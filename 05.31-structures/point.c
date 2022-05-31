#include <stdio.h>
#include "point.h"

/* To define a function that takes and returns a structure: */
Point swap(Point pt) {
    int tmp = pt.x;
    pt.x = pt.y;
    pt.y = tmp;

    return pt;
}

/* To define a function that takes a pointer to a structure: */
void increment(Point *ptptr) {
    /* NOTE: The dot operator has precedence over the unary star; either
     *       parenthesize the star or use an arrow instead. */
    ptptr->x++;
    ptptr->y++;
}

int main(void) {
    /* To declare and initialize a variable that is a structure: */
    Point pt = {1, 2};

    /* To access a member within a structure: */
    pt.x = 3;

    /* To call a function that takes and returns a structure: */
    pt = swap(pt);

    /* To call a function that takes a pointer to a structure: */
    increment(&pt);

    printf("pt (%p):\n", (void *)&pt);
    printf(" |-- x (%p): %d\n", (void *)&pt.x, pt.x);
    printf(" +-- y (%p): %d\n", (void *)&pt.y, pt.y);

    return 0;
}
