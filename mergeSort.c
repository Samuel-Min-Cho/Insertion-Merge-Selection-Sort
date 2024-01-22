#include "mySort.h"

void merge(int arr[], unsigned int first, unsigned int q, unsigned int last)
{
	int z = 0, x = 0, k = first;
	int n1 = q - first + 1;
	int n2 = last - q;
	int L[n1], M[n2];

	for (int i = 0; i < n1; i++)
		 myCopy(&arr[first + i], &L[i]);
	for (int j = 0; j < n2; j++)
		myCopy(&arr[q + 1 + j],&M[j]);

	while (z < n1 && x < n2)
	{
		if (myCompare(L[z], M[x]) <= 0)
		{
			myCopy(&L[z],&arr[k]);
			z++;
		}
		else 
		{
			myCopy(&M[x], &arr[k]);
			x++;
		}
		k++;
	}

		while (z < n1)
		{
			myCopy(&L[z],&arr[k]);
			z++;
			k++;
		}
		while (x < n2)
		{
			myCopy(&M[x], &arr[k]);
			x++;
			k++;
		}
		
}

void mySort(int array[], unsigned int first, unsigned int last)
{
	// int a[sizeof(array)] ;
	// int z,x;
	int q;
	if (first < last)
	{
		q = (first + last) / 2;
		mySort(array, first, q);
		mySort(array, q + 1, last);
		merge(array, first, q, last);
	}
}
