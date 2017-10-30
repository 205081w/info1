#include <stdio.h>

int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int a, b;
	a = getn();
	b = a % 7;

	if (b == 0) {
		printf("%dは7の倍数\n", a);
	} else {
		printf("%dは7の倍数ではない\n", a);
	}

	return 0;
}


