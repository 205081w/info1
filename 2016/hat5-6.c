#include <stdio.h>
int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int i, j, num, octal, base;

	printf("10進数: ");
	num = getn();
	base = 1;

	for (i = 0; i < 3; i++) {
		octal += (num % 8)*base;
		num = num / 8;
		base *= 10;
		if (num == 0) break;
	}

	printf(" 8進数: ");
	for (j = i; j < 2; j++) {
		printf("0");
	}
	printf("%d\n", octal);

	return 0;
}
