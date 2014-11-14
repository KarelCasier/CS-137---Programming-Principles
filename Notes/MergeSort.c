void mergeSort(int* a, int n, int*temp)
{
	if (n<=1) return;
	int i,j,k;
	mergeSort(a, n/2, temp); //Sort first half
	margeSort(a+n/2, n-n/2, temp); //Sort second half

	i = 0; j = n/2; k = 0;
	while(i<n/2 && j < n) //Merge
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
}

void sort(int a[], int n)
{
	int *temp = safeMalloc(n*sizeof(int));
	mergeSort(a,n,temp);
	free(temp);
}