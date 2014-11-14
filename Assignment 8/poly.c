#include "poly.h"
#include <stdio.h>
#include <stdlib.h>

struct poly *polyCreate()// - Creates a polynomial. Initially, all coefficients in the polynomial should be 0.
{
	struct poly *p = malloc(sizeof(*p));

    p->numTerms = 0;

    return p;
}

struct poly *polyDelete(struct poly *p)// - Frees storage associated with a polynomial. Returns a null pointer for convenience.
{
	struct polyTerm* term = p->first;
	while (term)
	{
		struct polyEle* tmp = term->next;
		free(term);
		term = tmp;
	}
	p->numTerms = 0;
	return p;
}

struct poly *polySetCoefficient (struct poly *p, int n, double value)// - Sets the ith coefficient of the polynomial to the specified value. Returns p for convenience. Assume that i ≥ 0.
{
	struct polyTerm* temp = p->first;
	for (int i = 0; i < n; ++i)
	{
		if (!temp->next) //If at end of poly
		{
			printf("Add One Term\n");
			struct polyTerm* toAdd = malloc(sizeof(*tmp));
			temp->next = toAdd;
			temp = temp->next;
		}
	}
	/*
	if (l->length<=n) return;
    if (n==0 && l->head) {
        l->head->value = value;
    }
    struct list_item* h;
    int i=1;
    for (h = l->head->next, i=1; h && i<n; i++) {
        h = h->next;
    }
    if (h && i==n) {
        h->value = value;
    }
    */
}
double polyGetCoefficient (struct poly *p, int i);// - Returns the ith coefficient of the polynomial. Assume that i ≥ 0.
int polyDegree (struct poly *p);// - Returns the degree of the polynomial. For this assignment, assume that the 0 polynomial has degree 0.
void polyPrint (struct poly *p);// - Prints the polynomial in the format illustrated below. You may reuse your A5P2 submission.
struct poly *polyCopy (struct poly *p);// - Makes a copy of a polynomial.
struct poly *polyAdd (struct poly *p0, struct poly *p1);// - Returns a new polynomial with the value p0+p1.
struct poly *polyMultiply (struct poly *p0, struct poly *p1);// - Returns a new polynomial with the value p0*p1.
struct poly *polyPrime (struct poly *p);// - Returns the derivative of the polynomial.
double polyEval (struct poly *p, double x);// - Evaluates the polynomial by substituting x.

/*
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
*/