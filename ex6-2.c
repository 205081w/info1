#include <stdio.h>

int main() {
	int i, sum=0;
	int arA[] = {5, 4, 8, 8, 1, 2, 7, 3};

	for (i = 0; i < 8; i++) {
		sum += arA[i];
	}
	printf("sum = %3d\n", sum);
	return 0;
}
