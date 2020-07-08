/* m009.c - Sort vector.

   This program reads N<=100 numbers passed as command line
   arguments and ouputs them in ascending order. Choose the
   sorting algorithm of your preference (see bellow).

   E.g.

      command line    : m009 3 2 5 4 2
      expected output : 2 2 3 4 5

   Directions:

      Please, edit function sort();
      do no not edit function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/* Sort the first 'n' integers values in 'vector'. */

void sort (int* vector, int n)
{
   char fname[100], mnames[500], lname[100], lnameinv[100];
  int i, j, k, z, w, x, ae, teste;

  k = 0;

  for (i = 0; s[i] != ' '; i++) //primeiro nome
   {
     fname[i] = s[i];
   }
  fname[i] = 0;
  //printf ("%s %d %d\n", fname, i, n);

  i++;
  
  for (j = 0; s[j] != 0; j++)  //o tamanho da string s
     {}
  j-=2;

  while(s[j] != ' ' && s[j] != 0)  //ultimo nome ao contrario
  {
    //printf("%d\n", k);
    lnameinv[k] = s[j];
    k++;
    j--;
  } 

  lnameinv[k] = 0;
  //printf("%s %d\n", lnameinv, k);
  w = k;
  k--;

  for(z = 0; z < w; z++) //ultimo nome
  {
    lname[z] = lnameinv[k];
    k--;
  }
  lname[z] = 0;
  //printf("%s\n", lname);

  x = 0;

  while (i < j) //nomes do meio
   {
     mnames[x] = s[i];
     x++;
     i++;
   }
   mnames[x] = 0;
   //printf("%s\n", mnames);

   teste = 0;

   for(ae = 0; lname[ae] != 0; ae++) //troca-troca
   {
     if(lname[ae]>='A' && lname[ae]<='Z')
     s[ae] = lname[ae];
     if(lname[ae]>='a' && lname[ae]<='z')
     s[ae] = lname[ae] - ('a'-'A');
   }
   s[ae] = ',';
   s[ae+1] = ' ';
   ae+= 2;
   while(fname[teste] != 0)
   {
     s[ae] = fname[teste];
     teste++;
     ae++;
   }
   s[ae] = ' ';
   teste = 0;
   ae++;
   while(mnames[teste] != 0)
   {
     s[ae] = mnames[teste];
     teste++;
     ae++;
   }
   s[ae] = 0;

   
}

#define USAGE "m009 <num1> <nun2> ... \n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int values[MAX];
  int i;

  /* Read command line arguments into vector. */
  
  for (i=1; i<argc; i++)
    values[i-1] = atoi(argv[i]);


  /* Sort vector. */
  
  sort (values, argc-1);


  /* Output sorted vector. */
  
  for (i=0; i<argc-1; i++)
    printf ("%d ", values[i]);

  printf ("\n");
  
  return 0;
}

/* Tip: check these sorting methods

   Selection sort: https://en.wikipedia.org/wiki/Selection_sort
   Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
   Insertion sort: https://en.wikipedia.org/wiki/Insertion_sort
  
 */
