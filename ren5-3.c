#include <stdio.h>

int main() {
	int i;

	for (i = 1; i <= 50; i = i + 1) {
		printf("%5d", i);
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	return 0;
}
