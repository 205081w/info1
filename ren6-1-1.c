#include <stdio.h>

int main() {
	int i;
	int arA[10];

	for (i = 0; i < 10; i++) {
		arA[i] = (i * 2) + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%3d", arA[i]);
	}

	printf("\n");

	return 0;
}
