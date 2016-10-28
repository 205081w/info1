#include <stdio.h>

int main() {
	int i, odd, even;

	odd = 0;
	even = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			even += i;
		} else {
			odd += i;
		}
	}

	printf("odd = %d\n", odd);
	printf("even = %d\n", even);

	return 0;
}

