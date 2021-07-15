#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = atoi(argv[1]);
	switch(x) {
		case 0:
			printf("X = 0\n");
			break;
		case 1: printf("X = 1\n");
			break;
	}
	return 0;
}
