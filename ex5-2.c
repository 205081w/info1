#include <stdio.h>

int main() {
	int i, j;

	for (j = 0; j < 4; j++) {
		printf("j = %d\n", j);
		for (i = 0; i < 3; i++) {
			printf("  i = %d\n", i);
		}
	}
	return 0;
}

