/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

int space_counter(char *s)
{
  int i, n = 0;
  
  for(i = 0; s[i] != 0; i++)
  {
    if (s[i] == ' ')
     n++;
  }
  return n;
}

void lastname (char *s)
{
  char fname[100], mnames[500], lname[100], lnameinv[100];
  int i, n, j, k, z, w, x, ae, teste;

  k = 0;
  n = space_counter(s);

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

   for(ae = 0; lname[ae] != 0; ae++)
   {
     if(lname[ae]>='A' && lname[ae]<='Z')
     s[ae] = lname[ae];
     if(lname[ae]>='a' && lname[ae]<='z')
     s[ae] = lname[ae] - ('a'-'A');
   }
   s[ae] = ',';
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



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
