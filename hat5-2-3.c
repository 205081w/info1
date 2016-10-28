#include <stdio.h>

int main() {
	int i, j, num;

	for (i = 1; i <= 8; i++) {
		num = 1;
		for (j = 1; j <= i; j++) {
			num *= 2;
		}
		printf("%5d", num);
	}
	printf("\n");

	return 0;
}
