#include <stdio.h>

int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int x;

	printf("x = ");
	x = getn();

	if (x >= 0) {
		printf("|x| = %d\n", x);
	} else {
		printf("|x| = %d\n", x*(-1));
	}

	return 0;
}


