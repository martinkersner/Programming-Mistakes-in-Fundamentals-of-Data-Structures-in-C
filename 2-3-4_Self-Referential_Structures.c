/**
 * FUNDAMENTALS OF DATA STUCTURES IN C 2ND EDITION
 * (Horowitz, Sahni, Anderson-Freed)
 *
 * 2.3.4 Self-Referential Structures (63p)
 *
 * Gcc:
 * gcc (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1
 *
 * Compile:
 * gcc -ansi -std=c89 2-3-4_Self-Referential_Structures.c
 *
 * Date:
 * 01/04/2014
 *
 * Output:
 * 2-3-4_Self-Referential_Structures.c: In function ‘main’:
 * 2-3-4_Self-Referential_Structures.c:31:5: error: unknown type name ‘list’
 * 2-3-4_Self-Referential_Structures.c:32:3: warning: useless storage class specifier in empty declaration [enabled by default]
 */

#include <stdlib.h>

int main (void)
{
  /* Self-Referential Structure according to book.
   * CANNOT BE COMPILED! */
  typedef struct list {
    char data;
    list *link;
  };

  /* One of the ways how to define Self-Referential Structure. */
  typedef struct list2 {
    char data;
    struct list2* link;
  } list2;

  return EXIT_SUCCESS;
}
