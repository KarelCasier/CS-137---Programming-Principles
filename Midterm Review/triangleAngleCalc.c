#include <stdio.h>
#include <math.h>

void angleCalc(float sideA, float sideB, float sideC);

int main(void)
{
    angleCalc(1, sqrt(3), 2);
}

float radToDeg(float rad)
{
    return (180/M_PI)* rad;
}

void angleCalc(float sideA, float sideB, float sideC)
{
    float angleAB, angleBC, angleAC = 0;

    angleAB = M_PI_2;
    angleAC = acos(sideA/sideC); // cos(theta) = A/C
    angleBC = acos(sideB/sideC); //sin(theta) = O/H

    printf("%G, %G, %G\n", radToDeg(angleAC), radToDeg(angleAB), radToDeg(angleBC));
    printf("%g\n", atan(4.0/3.0));
}
/*
    /|
   / |
 C/  |B
 /   |
/    |
-----
  A

*/
