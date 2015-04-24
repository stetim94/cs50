/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int j, k,y;
	k = n/2;
	y = 0;
	do {
		j = 0;
		if (y == k){
			return false;
			j = 2;
		}
		else if (values[k] > value){
			y = k;
			n = k;
			k = k/2;
		} else if (values[k] < value){
			y = k;
			k = (n+k)/2;
		} else {
			j = 1;
		} 
	} while(j==0);
	return true;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int i,swap,swap_count,reduce;
    reduce = 1;
	do {
	swap_count = 0;
		for (i = 0; i < (n - reduce); i++){
			if (values[i] > values[i+1]){
				swap_count++;
				swap = values[i];
				values[i] = values[i+1];
				values[i+1] = swap;
			}
		}
	reduce++;
	} while(swap_count != 0);
}
