#include <stdio.h>

int main(void){
	// array which needs sorting
	int array[7] = {7,5,3,1,8,4,6};
	// i is used to loop over the array
	// swap is used to temporary store value, allow for swap
	// swap_count keeps track if any swaps are made, if no swaps are made the sorting is finished
	int i,swap,swap_count;
	// after each loop the last number is the highest, you don't have to check it again
	// this is what reduce is for
	int reduce;
	reduce = 1;
	do {
	swap_count = 0;
		for (i = 0; i < (7 - reduce); i++){
			if (array[i] > array[i+1]){
				swap_count++;
				swap = array[i];
				array[i] = array[i+1];
				array[i+1] = swap;
			}
		}
	reduce++;
	} while(swap_count != 0);

	// search algorithm
	int j, k,y;
	int value = 2;
	int n = 7;
	k = n/2;
	y = 0;
	do {
		j = 0;
		if (y == k){
			j = 2;
		}
		else if(array[k] == value){
			j = 1;
		} else if (array[k] > value){
			y = k;
			n = k;
			k = k/2;
		} else if (array[k] < value){
			y = k;
			k = (n+k)/2;
		}
	} while(j==0);
	if (j==1){
		printf("%s\n", "found the number");
	}
	if (j==2){
		printf("%s\n", "number is not present");
	}
	// print our sorted array
	//for (i = 0; i < n; i++){
	//	printf("%i\n", array[i]);
	//}

}