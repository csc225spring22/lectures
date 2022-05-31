/*
 * Defines functions for linked lists.
 * CSC 225, Assignment 8
 * Given code, Spring '21
 */

#include <stdlib.h>
#include "list.h"

/* lstcreate: Creates an empty linked list. */
List *lstcreate() {
    /* TODO: Complete this function, given no arguments:
     * ...return a pointer to a new, dynamically allocated List structure. */

    /* NOTE: We must allocate space for a new List, but not any Nodes, as the
     *       list we are creating is currently empty. */
}

/* lstdestroy: Destroys an existing linked list. */
void lstdestroy(List *lst) {
    /* TODO: Complete this function, given:
     *  lst - A pointer to a List structure
     * ...deallocate all memory associated with "lst". */

    /* NOTE: We must deallocate space for the list we are destroying as well
     *       as all of its nodes -- the Nodes must be freed first; once the
     *       List is freed, we no longer have a pointer to the head. */
}

/* lstsize: Computes the size of a linked list. */
unsigned int lstsize(List *lst) {
    /* TODO: Complete this function, given:
     *  lst - A pointer to a List structure
     * ...return the number of nodes in "lst". */

    /* NOTE: No allocation or deallocation should be necessary; the size of the
     *       list is not changing. */
}

/* lstget: Gets an element in a linked list at an index. */
void *lstget(List *lst, unsigned int idx) {
    /* TODO: Complete this function, given:
     *  lst - A pointer to a List structure
     *  idx - A non-negative index
     * ...return a pointer to element "idx" of "lst", NULL if "idx" outside
     * the range [0, size - 1] */

    /* NOTE: No allocation or deallocation should be necessary; the size of the
     *       list is not changing. */
}

/* lstset: Sets an element in a linked list at an index. */
int lstset(List *lst, unsigned int idx, void *value) {
    /* TODO: Complete this function, given:
     *  lst   - A pointer to a List structure
     *  idx   - A non-negative index
     *  value - A pointer to a desired element
     * ...set element "idx" of "lst" to "value"; return 0 on success, 1 if
     *  "idx" outside the range [0, size - 1]. */

    /* NOTE: No allocation or deallocation should be necessary; the size of the
     *       list is not changing. */
}

/* lstadd: Adds an element to a linked list at an index. */
int lstadd(List *lst, unsigned int idx, void *value) {
    /* TODO: Complete this function, given:
     *  lst   - A pointer to a List structure
     *  idx   - A non-negative index
     *  value - A pointer to a desired element
     * ...add "value" as element "idx" of "lst"; return 0 on success, 1 if
     * "idx" outside the range [0, size]. */

    /* NOTE: We must allocate space for the Node we are adding. */
}

/* lstremove: Removes an element from a linked list at an index. */
void *lstremove(List *lst, unsigned int idx) {
    /* TODO: Complete this function, given:
     *  lst - A pointer to a List structure
     *  idx - A non-negative index
     * ...remove element "idx" of "lst"; return a pointer to the removed
     * element, NULL if "idx" outside the range [0, size - 1]. */

    /* NOTE: We must deallocate space for the Node we are removing. */
}

/* lsttoarr: Creates an array from a linked list. */
void **lsttoarr(List *lst) {
    /* TODO: Complete this function, given:
     *  lst - A pointer to a List structure
     * ...return a dynamically allocated array of void pointers containing the
     * elements of "lst", in the same order. */

    /* NOTE: We must allocate space for the array, as it is not safe to return
     *       a pointer to a local array. */
}

/* arrtolst: Creates a linked list from an array. */
List *arrtolst(void **arr, unsigned int n) {
    /* TODO: Complete this function, given:
     *  arr - An array of void pointers
     *  n   - The length of the given array
     * ...return a pointer to a new, dynamically allocated list containing the
     * elements of "arr", in the same order. */

    /* NOTE: We must allocate space for the List and its Nodes, but our other
     *       functions should already handle this... */
}
