#include "sorts.h"
#include "array_util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quickSortTest();
void insertionSortTest();
void bubbleSortTest();
void selectionSortTest();
void mergeSortTest();

int main(int argc, char** argv) {

 if (strcmp(argv[1], "selection") == 0){
 	selectionSortTest();

 }else if(strcmp(argv[1], "quick") == 0){

 	quickSortTest();
 }else if(strcmp(argv[1], "bubble") == 0){
 	bubbleSortTest();
 }else if(strcmp(argv[1], "insertion") == 0){
 	insertionSortTest();
 }else if(strcmp(argv[1], "merge") == 0){
mergeSortTest();
 }




}



void quickSortTest(){
long int l = 10000000;
 int v = (int) l;
//int sizes[] = {10,100,1000,10000, 100000, 1000000};
long array[1000000];
long int sizes[] = {1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

int i;
long before, after;

for(i = 0; i < 7; i++){
	random_array(array, sizes[i]);
	
	before = get_time_millis();
	int compars = quickSort(array, sizes[i]);
	after = get_time_millis();
	
	printf("size %ld, took %ld ms  and has %d comparisons\n", sizes[i], after - before, compars);

}
}

void selectionSortTest(){
int array[1000000];
int sizes[] = {10,100,1000,10000, 100000, 1000000};

int i;
long before, after;

for(i = 0; i < 8; i++){
	random_array(array, sizes[i]);
	before = get_time_millis();
	int compars = selectionSort(array, sizes[i]);
	after = get_time_millis();
	printf("size %d, took %ld ms  and has %d comparisons\n", sizes[i], after - before, compars);

}



}

void bubbleSortTest(){
int array[1000000];
int sizes[] = {10,100,1000,10000, 100000, 1000000};

int i;
long before, after;

for(i = 0; i < 8; i++){
	random_array(array, sizes[i]);
	before = get_time_millis();
	int compars = bubbleSort(array, sizes[i]);
	after = get_time_millis();
	printf("size %d, took %ld ms  and has %d comparisons\n", sizes[i], after - before, compars);

}

}


void insertionSortTest(){
int array[1000000];
int sizes[] = {10,100,1000,10000, 100000, 1000000};

int i;
long before, after;

for(i = 0; i < 8; i++){
	random_array(array, sizes[i]);
	before = get_time_millis();
	int compars = insertionSort(array, sizes[i]);
	after = get_time_millis();
	printf("size %d, took %ld ms  and has %d comparisons\n", sizes[i], after - before, compars);

}
}

void mergeSortTest(){
int array[1000000];
int sizes[] = {10,100,1000,10000, 100000, 1000000};

int i;
long before, after;

for(i = 0; i < 8; i++){
	random_array(array, sizes[i]);
	before = get_time_millis();
	int compars = mergeSort(array, sizes[i]);
	after = get_time_millis();
	printf("size %d, took %ld ms  and has %d comparisons\n", sizes[i], after - before, compars);

}
}



