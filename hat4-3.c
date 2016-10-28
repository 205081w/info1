#include <stdio.h>

int main() {
	int i, sum;

	i = 0;
	sum = 0;
	while (sum <= 5000) {
		i++;
		sum += i;
	}
	printf("sum = %d, i = %d\n", sum, i);

	return 0;
}

