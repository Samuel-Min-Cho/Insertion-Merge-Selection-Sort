#include "mySort.h"

// insertionSort 
void mySort(int array[], unsigned int first, unsigned int last)
{
	int i;
	/* Step 1: Is there nothing to sort? */
	while (first < last){
		/* Step 2: Swap... */
		for(i = first+1; i <= last; i++) {
		/* Find smallest one in rest of array */
			if(array[first] > array[i])) {
			/Step 2..continued...swap them */
				int tmp;
				tmp = array[first]
				array[first] = array[i];
				array[i] = tmp;
			}
		first++;
		}
	}
}
