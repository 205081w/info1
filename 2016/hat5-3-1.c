#include <stdio.h>

int main() {
	int i,j;

	for (j = 0; j < 5; j++) {
		for (i = 0; i < 4; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
