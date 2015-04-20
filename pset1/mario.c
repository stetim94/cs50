#include <stdio.h>

int main(void){
	int i, j, k;
	// get user input, value between 1 and 23
	do {
		printf("give me a number\n");
		scanf("%i",&i); 
	} while (i < 1 || i > 23);
	// j counts the number of rows of the pyramid
	for (j = 0; j < i; j++){
		// k prints out the required spaces
		for (k = 1; k < (i - j); k++){
			printf(" ");
		}
		// k prints out the number of hashes
		for (k = 0; k < ( j + 1); k++ ){
			printf("#");
		}
	printf("#\n");
	}
}
