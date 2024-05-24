#include <stdio.h>
void
main ()
{
  int n, i;
  unsigned long long fact = 1;
  printf ("Enter a natural number: ");
  scanf ("%d", &n);
  {
    for (i = 1; i <= n; ++i)
	fact = fact *i;
    printf ("Factorial of %d = %llu", n, fact);
  }
}
