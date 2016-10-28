#include <stdio.h>

int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int a, b, c;

	printf("a = ");
	a = getn();
	b = a % 3;
	c = a % 5;

	if (b == 0 && c == 0) {
		printf("fizzbizz\n");
	} else if (b == 0) {
		printf("bizz\n");
	} else if (c == 0) {
		printf("bizz\n");
	}

	return 0;
}

