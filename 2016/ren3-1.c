#include <stdio.h>

int main() {
	int a, b;

	a = 76;
	b = a % 2;

	if (b != 1) {
		printf("%4dは偶数\n", a);
	}

	return 0;
}
