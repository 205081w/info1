#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int n, n100;

	n = getn();
	n100 = n % 1000;
	n100 = n100 / 100;

	printf("n100 = %d\n", n100);

	return 0;
}

