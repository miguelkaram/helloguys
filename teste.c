#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void) {
	
	int i;
	getchar();
	i= fork();
	getchar();
	return 0;
}