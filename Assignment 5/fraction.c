#include <stdio.h>
#include <math.h>
#include "fraction.h"

int gcd(int n, int m)
{
    int gcd, remainder;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    return gcd;
}

void reduce(struct fraction* f)
{
    int gcdNum = gcd(f->n,f->d);
    f->n /= gcdNum;
    f->d /= gcdNum;
}

struct fraction fractionCreate (int n, int d)
{
    struct fraction result = {n, d};
    reduce(&result);
    return result;
}

struct fraction fractionAdd (struct fraction a, struct fraction b)
{
    struct fraction result = {a.n * b.d + b.n * a.d, a.d * b.d};
    reduce(&result);
    return result;
}

struct fraction fractionSubtract (struct fraction a, struct fraction b)
{
    struct fraction result = {a.n * b.d - b.n * a.d, a.d * b.d};
    reduce(&result);
    return result;
}

struct fraction fractionMultiply (struct fraction a, struct fraction b)
{
    struct fraction result = {a.n * b.n, a.d * b.d};
    reduce(&result);
    return result;
}

struct fraction fractionDivide (struct fraction a, struct fraction b)
{
    struct fraction result = {a.n * b.d, a.d * b.n};
    reduce(&result);
    return result;
}

void fractionPrint (struct fraction f)
{
    // Determine Sign
    int sign = 0;

    if ((f.n > 0 && f.d > 0) || (f.n < 0 && f.d < 0))
    {
        //sign = 1;
    }
    else if (f.n < 0 || f.d < 0)
    {
        sign = -1;
        printf("-");
    }

    f.n = fabs(f.n);
    f.d = fabs(f.d);
    //Reduce
    int gcdNum = gcd(f.n,f.d);
    f.n /= gcdNum;
    f.d /= gcdNum;

    if (f.n == 0 || f.d == f.n)
    {
            printf("%d", f.d);
    }
    else if (f.d == 0)
    {
        printf("Divide by Zero!");
    }
    else if (f.n > f.d) //Print porper fraction
    {
        int wholeNum = f.n / f.d;
        int partNumer = f.n % f.d;

        if (partNumer != 0)
        {
            printf("%d %d/%d", wholeNum, partNumer,f.d);
        }
        else
        {
            printf("%d", wholeNum);
        }
    }
    else
    {
        printf("%d/%d", f.n, f.d);
    }

    printf("\n");
}
