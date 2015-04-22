#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max_string_size 256

int main (int argc, char *argv[]){
	// check if correct number of arguments is supplied
	if(argc != 2){
		printf("only one argument allowed\n");
		exit(1);
	}
	char *p = malloc (max_string_size);
    if (p == NULL) {
        printf ("No memory\n");
        return 1;
    }
	// p is the string encrypt
	// x is the strlen of the provided string by the user
	// i is used to irritate of each character of the provided string
	int x,i; 
	int k = atoi(argv[1]);
	printf("what is the string you like to encrypt?\n");
	// get user input, with max-size
	fgets (p, max_string_size, stdin);
	if ((strlen(p)>0) && (p[strlen (p) - 1] == '\n')){
        p[strlen (p) - 1] = '\0';
	}

	x = strlen(p);
	for (i = 0; i < x; i++){
		if (isalpha(p[i])){
			if(islower(p[i])){
				p[i] = (p[i] + k + 7)%26;
				p[i] = p[i] + 97;
			}
			if(isupper(p[i])){
				p[i] = (p[i] + k + 13)%26;
				p[i] = p[i] + 65;
			}
		}
	}
	printf("%s\n", p);
	free(p);
	exit(0);
}

