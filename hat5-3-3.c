#include <stdio.h>

int main() {
	int i, j, k;

	for (j = 0; j < 5; j++) {
		for (k = 4; k > j; k--) {
			printf(" ");
		}
		for (i = 0; i < j; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
