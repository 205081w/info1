#include <stdio.h>

int main() {
	int i, j;

	for (j = 0; j < 4; j++) {
		for (i = 3; i >= 0; i--) {
			printf("%5d", (j*4)+i);
		}
		printf("\n");
	}

	return 0;
}
