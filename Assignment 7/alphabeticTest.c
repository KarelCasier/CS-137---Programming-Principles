#include <stdio.h>
#include <stdlib.h>

char *alphabetic (const char *s);

int main (void)
{
  char *a, *b, *c, *d;
  a = alphabetic ("Ready... aim... fire!");
  b = alphabetic ("***");
  c = alphabetic ("*a*b*c*");
  d = alphabetic(NULL);
  
  printf ("%s\n", a);
  printf ("%s\n", b);
  printf ("%s\n", c);
  printf("%s\n", d);

  free(a);
  free(b);
  free(c);
  
  return 0;
}
