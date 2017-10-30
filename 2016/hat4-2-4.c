#include <stdio.h>

int main() {
	int i, j;

	i = 1;
	j = 1;
	while (i <= 45) {
		printf("%4d", i);
		j++;
		i += j;
	}
	printf("\n");

	return 0;
}
