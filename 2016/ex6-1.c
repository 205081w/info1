#include <stdio.h>

int main() {
	int i;
	int arA[8];

	for (i = 0; i < 8; i++) {
		arA[i] = i * 2;
	}
	for (i = 0; i < 8; i++) {
		printf("arA[%d] = %2d\n", i, arA[i]);
	}

	return 0;
}
