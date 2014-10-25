typedef enum {false, true} bool;

#include <stdio.h>
#include <math.h>

void polyPrint(double a[], int n)
{
    bool hadPrevNumber = false;

    for (int i = n-1; i >= 0; i--)
    {

        if (a[i] < 0 && fabs(a[i]) == 1 && !hadPrevNumber)
        {
            printf("-");
        }

        //Handle Coefficients
        if ((a[i] > 0 || a[i] < 0)  && (fabs(a[i]) != 1 || i == 0)) // If coeff greater then
        {
            hadPrevNumber = true;
            if (i == n-1)
                printf("%g", a[i]);
            else
                printf("%g", fabs(a[i])); //Print coeff only if it's greater then 1
        }

        //Handle x's
        if(i == 1 && a[i] != 0)
        {
            printf("x");
            hadPrevNumber = true;
        }
        else if (i > 0 && a[i] != 0)
        {
            hadPrevNumber = true;
            printf("x^%d", i);
        }

        //Determine wether to print '+' or '-'
        if (i > 0)
        {
            if (hadPrevNumber)
            {
                if (a[i-1] > 0)
                    printf(" + ");
                else if (a[i-1] < 0)
                    printf(" - ");
            }
        }
    }
    if (!hadPrevNumber)
        printf("0");
    printf("\n");
}
