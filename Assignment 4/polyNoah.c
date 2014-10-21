#include <stdio.h>
#include <math.h>

void polyPrint (double a[], int n)
{
  for(int i = n - 1; i >= 0; i--)
    {
      if(a[i] != 0)
      {
        if (i < (n-1))
        {
          if (a[i] > 0)
            printf(" + ");
          else if (a[i] < 0)
            printf(" - ");
        }

        if((a[i] != 1) && (i > 0))
          printf("%g", fabs(a[i]));
        else if(i == 0)
          printf("%g",fabs(a[i]));
        if((i != 1) && (i != 0))
          printf("x^%d", i);
        else if(i == 1)
          printf("x");
       }
    }
    
    printf("\n");
}
