#include <stdio.h>

int main() {
	int i;

	i = 100;
	while (i > 0) {
		printf("%5d", i);
		i--;
	}
	printf("\n");
	return 0;
}
