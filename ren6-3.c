#include <stdio.h>

int main() {
	int i, max;
	int arA[] = {5, 1, 9, 4, 8, 3, 7};

	max = arA[0];
	for (i = 1; i < 7; i++) {
		if (max < arA[i]) {
			max = arA[i];
		}
	}

	printf("max = %d\n", max);

	return 0;
}

