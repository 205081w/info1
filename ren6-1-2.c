#include <stdio.h>

int main() {
	int i, j, bin;
	int arA[10];

	for (i = 0; i < 10; i++) {
		bin = 1;
		for (j = 0; j < i; j++) {
			bin *= 2;
		}
		arA[i] = bin;
	}
	for (i = 0; i < 10; i++) {
		printf("%4d", arA[i]);
	}

	printf("\n");

	return 0;
}
