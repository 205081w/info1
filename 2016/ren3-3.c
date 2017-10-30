#include <stdio.h>

int main() {
	int a, b;

	a = 77;
	b = a % 2;

	if (b != 1) {
		printf("%4dは偶数\n", a);
	} else {
		printf("%4dは奇数\n", a);
	}

	return 0;
}
