#include <stdio.h>
#include <stdlib.h>

int *histogram (const int *a, int n, int *m)
{
   //printf("call\n");
   int *list;
   *m = 0;
   for (int i = 0; i < n; i++)
     {
       if (a[i] > *m)
         *m = (a[i]);
     }
     *m += 1;
     //printf("here: %d\n", *m);
     list = malloc((*m)*sizeof(int));
     if(list == NULL)
       printf("error");
     for(int i = 0; i < 9; i++)
       {
        list[i] = 0;
         for (int z = 0; z < n; z++)
           {
             if(a[z] == i)
               {
                 //printf("z = i %d\n", z);
               list[i] += 1;
               //printf("list[]: %d", list[i]);
             }
           }
       }

       return list;
}