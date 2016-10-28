#include <stdio.h>
int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int num, x, i;

	num = 33;
	for (i = 10; i > 0; i--) {
		printf("Input your guess(0-99), [Remain %d times]: ", i);
		x = getn();
		if (x ==num) {
			printf("Correct!!\n");
			break;
		} else if (x < num) {
			printf("Small\n");
		} else if (x > num) {
			printf("Big\n");
		}
	}

	return 0;
}
