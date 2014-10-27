#include <stdio.h>
#include "event.h"

int main (void)
{
  //struct event schedule[] = {{{9,45},{9,55}},{{13,0},{14,20}},{{15,0},{16,30}}};


  //printf ("%d\n", freetime (schedule,3,8,0));
  //printf ("%d\n", freetime (schedule,3,9,50));
  //printf ("%d\n", freetime (schedule,3,13,0));
  //printf ("%d\n", freetime (schedule,3,16,30));

  struct event almostfull[] = {{{0,0}, {23,59}}};

    printf ("%d\n", freetime (almostfull,1,0,0));
    printf ("%d\n", freetime (almostfull,1,23,59));
    printf ("%d\n", freetime (almostfull,1,12,34));
    printf ("%d\n", freetime (almostfull,1,9,55));
    printf ("%d\n", freetime (almostfull,1,3,0));
    printf ("%d\n", freetime (almostfull,1,7,43));
    printf ("%d\n", freetime (almostfull,1,19,59));
    printf ("%d\n", freetime (almostfull,1,20,0));
    printf ("%d\n", freetime (almostfull,1,9,59));
    printf ("%d\n", freetime (almostfull,1,10,0));
    printf ("%d\n", freetime (almostfull,1,23,58));
    printf ("%d\n", freetime (almostfull,1,0,01));


  return 0;
}