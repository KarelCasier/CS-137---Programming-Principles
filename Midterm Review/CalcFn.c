#include <stdio.h>
#include <math.h>

float calcFn(int n)
{
    return 29*(pow(pow(3.0, 1.0/4.0), n - 49.0));
}

int main(void)
{
    printf("%g\n", calcFn(1));
    printf("%g\n", calcFn(5));
    printf("%g\n", calcFn(6));
    printf("%g\n", calcFn(8));
    printf("%g\n", calcFn(53));
    printf("%g\n", calcFn(-3));
}
