#include <stdio.h>

int main() {
	int i, j, k, n;

	for (j = 0; j < 5; j++) {
		n = (j-2);
		if (n < 0) n *= (-1);
		for (k = n;k > 0; k--) {
			printf(" ");
		}
		for (i = ((2-n)*2)+1; i > 0; i--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
