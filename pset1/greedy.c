#include <stdio.h>
#include <math.h>

int main(void){
	float i;
	int j, k;
	do {
		printf("ammount:\n");
		scanf("%f", &i);
	} while (i < 0);
	k = round(i * 100);
	j = 0;
	printf("%i\n", k);
	while( k >= 25 ){
		j++;
		k = k - 25;
	}
	while( k >= 10 ){
		j++;
		k = k - 10;
	}
	while( k >= 5 ){
		j++;
		k = k - 5;
	}
	while( k >= 1 ){
		j++;
		k = k - 1;
	}
	printf("%i\n", j);
}