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
	printf("b = ");
	b = getn();
	printf("c = ");
	c = getn();

	if (a == b && b == c) {
		printf("全て等しい\n");
	}

	return 0;
}
