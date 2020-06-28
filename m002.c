/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{
  int n;
  if(*a>=*b && *a>=*c)
  {
    if(*b >= *c)
    {
      n = *a;
      *a = *c;
      *c = n;
    }
    else {
      n = *a;
     *a = *b;
     *b = *c;
     *c = n;
    }

  }
  if (*b >= *a && *b >= *c) {
     if(*a >= *c)
    {
      n = *c;
      *c = *b;
      *b = *a;
      *a = n;
    }
    else {
      n = *c;
      *c = *b;
      *b = n;
    }
  }
  if (*c >= *a && *c >= *b) {
    if(*a >= *b)
    {
      n = *b;
      *b = *a;
      *a = n;
    }
  }
} 

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
