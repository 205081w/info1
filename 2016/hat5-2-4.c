#include <stdio.h>

int main() {
	int i, num;

	num = 0;
	for (i = 1; i < 10; i++) {
		num += i;
		printf("%3d", num);
	}
	printf("\n");

	return 0;
}
