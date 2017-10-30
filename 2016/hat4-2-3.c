#include <stdio.h>

int main() {
	int i;

	i = 1;
	while (i <= 256) {
		printf("%4d", i);
		i *= 2;
	}
	printf("\n");

	return 0;
}
