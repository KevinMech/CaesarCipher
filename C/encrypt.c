#include <stdio.h>
#include <stdlib.h>

void encrypt(char *string, int places);

/* Takes characters and returns encrypted */
int main(int argc, char* argv[])
{
	if (argv[2] && argv[1]) {
		int places; 
		char *string = argv[2];
		char *p;
		places = strtol(argv[1], &p, 10);
		encrypt(string, places);
		printf("%s\n", string);
	} else {
		printf("ERROR. Try './encrypt 1 \"Hello World\"'\n"
		       "1 is the number of characters you'd like to shift.\n"
		       "\"Hello World\" Is the text you want to be encrypted\n"
		       "and can also be taken from stdin(probably).");
	}
}

/* Shifts the text */
void encrypt(char *c, int places)
{
	while (*c != '\0') {
		*c += places;
		c++;
	}
}


