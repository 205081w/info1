#include <stdio.h>

int main() {
	int i;

	i = 1;
	while (i <= 50) {
		printf("%5d", i);
		if (i % 5 == 0) {
			printf("\n");
		}
		i++;
	}
	return 0;
}
