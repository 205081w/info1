#include <stdio.h>

int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int n, i, prime;

	printf("n = ");
	n = getn();

	prime = 0;
	i = n - 1;
	while (i > 1) {
		if (n % i == 0) {
			prime++;
		}
		i--;
	}

	if (prime != 0 || n == 1) {
		printf("%d is not a prime.\n", n);
	} else {
		printf("%d is a prime.\n", n);
	}

	return 0;
}

