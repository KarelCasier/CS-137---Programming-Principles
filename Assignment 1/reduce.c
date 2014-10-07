#include <stdio.h>

int main(void)
{
	int a,b,temp = 0;
    
	scanf("%d", &a);
	scanf("%d", &b);

    int sign = 1;

    if (a < 0 || b < 0)
    {
        sign = -1;

        if (a < 0)
        {
            a *= sign;
        }
        else if (b < 0)
        {
            b *= sign;
        }
    }

    int origA = a;
    int origB = b;
	
    if (b == 0) {
        printf("%s\n", "Divide by zero!");
    }
    else
    {
        int remainder = origA % origB;
        if (remainder != 0) //If remainder isn't 0, determine remaining fraction
        {
            while (b!=0)
            {
                temp = b;
                b = a % b;
                a = temp; //a is GCD
            }
            
            int numer = origA / a;
            int denom = origB / a;
            
            int coeff = origA / origB;
            if (coeff != 0) { //Find coeff of rational fraction if it exists

                printf("%d%s", sign*coeff, " ");
                numer -= coeff*denom;
            }
            else
            {
                numer *= sign;
            }
            
            printf("%d/%d\n", numer, denom);
        }
    }
    return 0;
}