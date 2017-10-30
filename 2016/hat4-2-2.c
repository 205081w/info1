#include <stdio.h>

int main() {
	int i;

	i = 10;
	while (i > 0) {
		printf("%3d", i);
		i--;
	}
	printf("\n");

	return 0;
}
