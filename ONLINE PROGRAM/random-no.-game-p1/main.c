#include<stdio.h>
#include"stdlib.h"
#include"time.h"
void
main ()
{
  int number, guess, no_guesses;

  srand (time (0));
  number = rand () % 100 + 1;
 // printf ("%d\n", number);//hints only 
  do
    {
      printf ("\nEnter the no. between 1 to 100 :-\n");
      scanf ("%d", &guess);
      if (number < guess)
	printf ("\nEnter Small no.");
      else if (number > guess)
	printf ("\nEnter Large no.");
      else
	printf ("\nCongratulations you find the no. in %d attempts",
		no_guesses);
      no_guesses++;
    }
  while (number != guess);
}
