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
	// buffer overflow protection
	// p is the string encrypt
	char *p = malloc (max_string_size);
    if (p == NULL ) {
        printf ("No memory\n");
        return 1;
    }
	
	// x is the strlen of the provided string by the user
	// i is used to irritate of each character of the provided string the user wishes to encrypt
	// j is used to purify the key
	// y is the length of key
	// w is also used purify the key (key can only contain letters)
	
	int x,i,j,y,w; 
	char *key = argv[1];
	y = strlen(key);
	for(j=0; key[j]!='\0'; j++){
        while (!((key[j]>='a'&&key[j]<='z') || (key[j]>='A'&&key[j]<='Z'))){
            for(w=j;key[w]!='\0';w++){
                key[w]= key[w+1];
                key[w] = tolower(key[w]);
            }
        }
    }
    // for loop to calculate the shift
	for (j=0;j<y;j++){
		key[j] = (key[j] + 7)%26;
	}
	
	printf("what is the string you like to encrypt?\n");
	// get user input, with max-size
	fgets (p, max_string_size, stdin);
	if ((strlen(p)>0) && (p[strlen (p) - 1] == '\n')){
        p[strlen (p) - 1] = '\0';
	}
	// w is used to keep track of which character the key is at
	w = 0;
	x = strlen(p);
	for (i = 0; i < x; i++){
		if (isalpha(p[i])){
			j = w%y;
			w++;
			if(islower(p[i])){
				p[i] = (p[i] + key[j] + 7)%26;
				p[i] = p[i] + 97;
			}
			if(isupper(p[i])){
				p[i] = (p[i] + key[j] + 13)%26;
				p[i] = p[i] + 65;
			}
		}

	}
	// print the encrypted string
	printf("%s\n", p);
	// give the computer back it's memory
	free(p);
	// exit the program succesful
	exit(0);
}

