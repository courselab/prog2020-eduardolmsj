/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
   //primeiro dia foi quarta
  int i, j;


  switch(month)
  {
    case 1:
      month = 0;
      break;
    case 2:
      month = 31;
      break;
    case 3:
      month = 60;
      break;
    case 4: 
      month = 91;
      break;
    case 5:
      month = 121;
      break;
    case 6:
      month = 152;
      break;
    case 7:
      month = 182;
      break;
    case 8:
      month = 213;
      break;
    case 9:
      month = 244;
      break;
    case 10:
      month = 274;
      break;
    case 11:
      month = 305;
      break;
    case 12:
      month = 335;
      break;
  }

  if(day>=1 && day<=7)
    i = 2 + month + day;
  if(day>=8 && day<=14)
     i = 2 + month + day-7;
  if(day>=15 && day<=21)
     i = 2 + month + day-14;
  if(day>=22 && day<=28)
    i = 2 + month + day-21; 
  if(day>=29 && day<=31)
     i = 2 + month + day-28;
  
  j = i%7;
  return j;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
