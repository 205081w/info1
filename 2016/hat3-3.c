#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int a, b, x;

	printf("a = ");
	a = getn();
	printf("b = ");
	b = getn();

	printf("select calculation mode 0:add 1:sub 2:mul 3:div 4:rem\n");
	x = getn();

	if (x == 0) {
		printf("a + b = %d\n", a + b);
	} else if (x == 1) {
		printf("a - b = %d\n", a - b);
	} else if (x == 2) {
		printf("a * b = %d\n", a * b);
	} else if (x == 3) {
		printf("a / b = %d\n", a / b);
	} else if (x == 4) {
		printf("a \% b = %d\n", a % b);
	}

	return 0;
}


