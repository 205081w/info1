#include <stdio.h>

int main() {
	int i;

	i = 1;
	while (i <= 20) {
		if (i % 2 != 0) {
			printf("%3d", i);
		}
		i++;
	}
	printf("\n");

	return 0;
}
