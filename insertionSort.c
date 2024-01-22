#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
{
	int key,i;
	while (first <= last)
	{
		key = array[first];
		i = first - 1;
		while (i >= 0 && myCompare(array[i], key) > 0)
		{
			mySwap(&array[i + 1], &array[i]);
			i = i - 1;
		}
		myCopy(&key, &array[i + 1]);
		first ++;
	}
}
