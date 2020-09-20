#include <stdio.h>

#include "array_util.h"
#include "sorts.h"

int main()
{
	int i;
	long fore, aft;
	int comparisons;
	// holds the main array 
	int master[500000];
	int copy[500000];
	// varies sizes 
	int sizes[] = { 10, 50, 100, 150, 500, 10000, 15000, 20000, 25000,
		30000, 35000, 40000, 45000, 50000, 75000, 100000, 150000, 200000, 250000, 400000, 500000 };
		// displays the types of sorting algorithims
	printf("\tbubble\tselection\tinsertion\tshell\tmerge\t quick\n");
	// the comparison section
	printf("comparisons\n");
	for (i = 0; i < 10; i++) {
		printf("%d:", sizes[i]);
		random_array(master, sizes[i]);
		// copies array so the other sorting methods can sort them
		copy_array(master, copy, sizes[i]);
		comparisons = bubbleSort(copy, sizes[i]);

		printf("\t%d", comparisons);

		copy_array(master, copy, sizes[i]);
		comparisons = selectionSort(copy, sizes[i]);

		printf("\t%d", comparisons);

		copy_array(master, copy, sizes[i]);
		comparisons = insertionSort(copy, sizes[i]);

		printf("\t\t%d", comparisons);

		copy_array(master, copy, sizes[i]);
		comparisons = shellSort(copy, sizes[i]);

		printf("\t\t%d", comparisons);

		copy_array(master, copy, sizes[i]);
		comparisons = mergeSort(copy, sizes[i]);

		printf("\t%d", comparisons);

		copy_array(master, copy, sizes[i]);
		comparisons = quickSort(copy, sizes[i]);

		printf("\t%d\n", comparisons);
	}
	// loops the different sizes and tests each sorting method
	printf("running times\n");
	for (i = 4; i < 21; i++) {

		random_array(master, sizes[i]);
		printf("%d:", sizes[i]);

		copy_array(master, copy, sizes[i]);
		fore = get_time_millis();
		bubbleSort(copy, sizes[i]);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, sizes[i]);
		fore = get_time_millis();
		selectionSort(copy, sizes[i]);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, sizes[i]);
		fore = get_time_millis();
		insertionSort(copy, sizes[i]);
		aft = get_time_millis();

		printf("\t%ld ", aft - fore);

		copy_array(master, copy, sizes[i]);
		fore = get_time_millis();
		shellSort(copy, sizes[i]);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, sizes[i]);
		fore = get_time_millis();
		mergeSort(copy, sizes[i]);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, sizes[i]);
		fore = get_time_millis();
		quickSort(copy, sizes[i]);
		aft = get_time_millis();

		printf("\t%ld\n", aft - fore);

	}

	return 0;
}
