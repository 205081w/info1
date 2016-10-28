#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
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

	if (a > b) {
		if (a > c) {
			printf("max = a\n");
		} else {
			printf("max = c\n");
		}
	} else {
		if (b > c) {
			printf("max = b\n");
		} else {
			printf("max = c\n");
		}
	}

	return 0;
}

