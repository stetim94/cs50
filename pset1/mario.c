#include <stdio.h>

int main(void){
	int i, j;
	do {
		printf("give me a number\n");
		scanf("%i",&i); 
	} while (i < 8 || i > 23);
	for (j = 0; j < i; j++){
		printf("#\n");
	}
}
