#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int a, b, c;

	printf("n = ");
	a = getn();

	b = a / 16;
	c = a % 16;

	printf("0x");
	if (b == 10) {
		printf("A");
	} else if (b == 11) {
		printf("B");
	} else if (b == 12) {
		printf("C");
	} else if (b == 13) {
		printf("D");
	} else if (b == 14) {
		printf("E");
	} else if (b == 15) {
		printf("F");
	} else {
		printf("%d", b);
	}

	if (c == 10) {
		printf("A\n");
	} else if (c == 11) {
		printf("B\n");
	} else if (c == 12) {
		printf("C\n");
	} else if (c == 13) {
		printf("D\n");
	} else if (c == 14) {
		printf("E\n");
	} else if (c == 15) {
		printf("F\n");
	} else {
		printf("%d\n", c);
	}

	return 0;
}

