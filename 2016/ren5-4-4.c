#include <stdio.h>

int main() {
	int i, j;

	for (j = 3; j >= 0; j--) {
		for (i = 0; i < 8; i+=2) {
			printf("%5d", (j*4)+i);
		}
		printf("\n");
	}

	return 0;
}
