#include <stdio.h>

int main() {
	int i, n;
	int arA[10];

	n = 0;
	for (i = 0; i < 10; i++) {
		n += i+1;
		arA[i] = n;
	}
	for (i = 0; i < 10; i++) {
		printf("%4d", arA[i]);
	}

	printf("\n");

	return 0;
}
