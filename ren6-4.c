#include <stdio.h>

int main() {
	int i, min;
	int arA[] = {5, 1, 9, 4, 8, 3, 7};

	min = arA[0];
	for (i = 1; i < 7; i++) {
		if (min > arA[i]) {
			min = arA[i];
		}
	}

	printf("min = %d\n", min);

	return 0;
}

