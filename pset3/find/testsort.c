#include <stdio.h>

int main(void){
	// array which needs sorting
	int array[7] = {7,5,3,1,2,4,6};
	// i is used to loop over the array
	// swap is used to temporary store value, allow for swap
	// swap_count keeps track if any swaps are made, if no swaps are made the sorting is finished
	int i,swap,swap_count;
	do {
	swap_count = 0;
		for (i = 0; i < 6; i++){
			if (array[i] > array[i+1]){
				swap_count++;
				swap = array[i];
				array[i] = array[i+1];
				array[i+1] = swap;
			}
		}
	} while(swap_count != 0);
	// print our sorted array
	for (i = 0; i < 7; i++){
		printf("%i\n", array[i]);
	}

}