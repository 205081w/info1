#include <stdio.h>
int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int tmp, a, b;

	printf("Input two numbers such that a>=b\n");
	printf("a = ");
	a = getn();
	printf("b = ");
	b = getn();


	while (b > 0) {
		tmp = a;
		a = b;
		b = tmp % b;
		printf("a = %d, b = %d\n", a, b);
	}

	return 0;
}

