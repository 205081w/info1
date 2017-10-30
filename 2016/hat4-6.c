#include <stdio.h>
int getn() {
	int x;
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

int main() {
	int n, bin, i, base;

	i = 1;
	bin = 0;
	base = 1;
	n = getn();

	printf("Base 10: %d\n", n); 

	while (n > 0) {
		bin += (base * (n % 2));
		base *= 10;
		i++;
		n /= 2;
	}

	printf("Base  2: "); 
	while (i <= 8) {
		printf("0");
		i++;
	}

	printf("%d\n", bin); 

	return 0;
}

