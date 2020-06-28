/* m000.c - Pitagorean name number

   This program takes the a person's full name read as a string from 
   from the standard input and output its Pitagorean Number as shown 
   in reference [1] at the bottom of this source file.

   E.g.

      command line    : John Doe
      expected output : 35

   Directions:

      Please, edit function roman();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 255

/* Write the number 'n' in Roman numerals.*/

int pitagorean (char *s)
{
  int i, n, count;
  i = 0;
  count = 0;

  while (s[i] != 0)
  {
      if (s[i]>=97 && s[i]<=122) {
      n = (s[i]-97)%9 + 1;
      count = count + n;
      }
      if (s[i]>=65 && s[i]<=90) {
      n = (s[i]-65)%9 + 1;
      count = count + n;
      }
      i++;
  }
  return count;
  /* a função esta diferente pois eu tentei reproduzir por conta um dia após ver o vídeo,somente para teste */
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = pitagorean (name);
  
  printf ("%d\n", n);

  return 0;
}

/*  
    References:

    [1] Pitagorean name number
    https://en.wikipedia.org/wiki/Numerology#Pythagorean_system
*/
