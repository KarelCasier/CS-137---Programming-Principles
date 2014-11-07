#include <stdio.h>


// 1) returns memory allocated by malloc
// 2) size_t is an unsigned int type 
// Allocates a blank memory of the specified size
//		  1		2
//void *malloc(size_t SIZE); 

// Frees memory created by malloc
//
//void free(void *p);


//Example - Create an array containing 1 ton
#include <stdlib.h>
int* numbers(int n)
{
	int *p = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		p[i] = i+1;
	}
	return p;
}


int main(void)
{
	int* q = number(100);
	printf("%d\n", q[50]);
	free(q);
	return 0;
}