#include <stdio.h>
#include <stdlib.h>

int *histogram (const int *a, int n, int *m);

int main (void)
{
    //int a[] = {1, 2, 3, 3, 3, 2, 1, 4, 5, 6, 0, -100};
    int a[] = {};
    //int a[] = {1,2,-3,5,-10,4,3,-6,-8,-10};
    //int a[] = {8,8,8,8,8,8,8,8,8,8,8,8,8,8};
    int *h, m, i;

    h = histogram (a, sizeof(a)/sizeof(a[0]), &m);

    if (h)
    {
        for (i = 0; i < m; i++)
            printf ("%d\n", h[i]);
        free (h);
    }

    return 0;
}