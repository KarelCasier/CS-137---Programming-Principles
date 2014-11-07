#include <stdio.h>
#include <stdlib.h>

typedef enum {false, true} bool;


void sort(int* number, int n)
{

     /*Sort the given array number , of length n*/     

    int temp=0,j,i;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(number[j] >number[j+1])
            {
           		temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
}

void printArr(const int*arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("|%d", arr[i]);
	}
	printf("|\n");
}

int *histogram (const int *a, int n, int *m) //a -> array, n -> size, m -> size of returned array, return array
{

	int* histo = NULL;
	int* numUsed = malloc(0*sizeof(int));
	*m = 0; //Size of returned array

	for (int i = 0; i < n; i++) //Loop through size of array given
	{
		bool toAdd = true;
		for (int j = 0; j < (*m); j++) //loop through histoarray size
		{
			if (a[i] == numUsed[j] || a[i] < 0) //If found in histo -> don't add to array
				toAdd = false;
		}
		if (toAdd == true) //If not found add size
		{
			//printf("| NumToAdd: %d\n", a[i]);
			numUsed = realloc(numUsed, (++(*m))*sizeof(*numUsed) );
			numUsed[*m-1] = a[i];
			//printArr(numUsed, *m);
		}
	} 
	if (*m == 0)
		return histo;
	//Now have array of all unique numbers
	//printf("Size: %d\n", *m);
	//printArr(numUsed, *m);
	//sort array
	sort(numUsed, *m);
    //printArr(numUsed, *m);
	int sizeOfNumUsed = *m;
	(*m) = (numUsed[(*m-1)]+1);
	histo = malloc((*m)*sizeof(int));

	for (int x = 0; x < *m; x++)
	{
		histo[x] = 0;
	}
	//printf("%d\n", *m);
	//for(int i = 0; i < *m; i++)  //Loop though size of new array (histo)
    {
    	//printf("%d\n", i);
	    
        for (int j = 0; j < n; j++) //Loop through size of orig array (a)
        {
        	//histo[a[j]] = 0;
        	for (int k = 0; k < sizeOfNumUsed; k++) //Loop though size of used numbers (numUsed)
        	{
        		if(a[j] == numUsed[k]) //If a[j] = any of the numbers used
            	{
            		histo[a[j]] += 1;
	       	    	//printf("z = i %d\n", z);
	       	    	//printf("i = %d | j = %d | k = %d | a[j] = %d | numUsed[k] = %d\n", i,j,k,a[j],numUsed[k]);
	               	//printf("list[]: %d", list[i]);
	             }
        	}
        		
            
        }
    }

	return histo;	
}