/**
 * FUNDAMENTALS OF DATA STUCTURES IN C 2ND EDITION
 * (Horowitz, Sahni, Anderson-Freed)
 *
 * 1.15: Program 1.12 with count statements added (27p)
 *
 * Gcc:
 * gcc (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1
 *
 * Compile:
 * gcc -ansi -std=c89 1-15-Program_1-12_with_count_statement_added.c
 *
 * Date:
 * 01/04/2014
 */

float rsum(float list[], int n)
{
  count++;

  if (n) {
    count++;
    return rsum(list, n-1) + list[n-1];
  }

  count++;

  /* Incorrect return value.
   * Sum of "list[] = {1,20,3,4,5};" is 34.
   *
   * return list[0]; */

  /* Zero is correct return value.
   * Sum of "list[] = {1,20,3,4,5};" is 33. */
  return 0;
}
