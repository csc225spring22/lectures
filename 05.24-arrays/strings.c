#include <stdio.h>

int main(void) {
    /* To declare a string as an array of characters: */
    char str1[] = "bar";

    /* To declare a string as a character pointer: */
    char *str2 = "foo";

    /* To mutate a string declared as an array of characters: 
     * NOTE: This cannot be done with strings declared as character pointers,
     *       which are stored in the global, read-only section of memory. */
    str1[2] = 'y';

    printf("str1: %p\n", (void *)str1);
    printf(" |-- %p: %d\n", (void *)(&str1[0]), str1[0]);
    printf(" |-- %p: %d\n", (void *)(&str1[1]), str1[1]);
    printf(" |-- %p: %d\n", (void *)(&str1[2]), str1[2]);
    printf(" +-- %p: %d\n", (void *)(&str1[3]), str1[3]);

    printf("str2: %p\n", (void *)str2);
    printf(" |-- %p: %d\n", (void *)(&str2[0]), str2[0]);
    printf(" |-- %p: %d\n", (void *)(&str2[1]), str2[1]);
    printf(" |-- %p: %d\n", (void *)(&str2[2]), str2[2]);
    printf(" +-- %p: %d\n", (void *)(&str2[3]), str2[3]);

    /* To print a string: */
    printf("%s, %s\n", str1, str2);

    return 0;
}
