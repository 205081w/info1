#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int n;

	printf("n = ");
	n = getn();
	if (n >= 95) {
		printf("AA\n");
	} else if (n >= 90) {
		printf("A\n");
	} else if (n >= 80) {
		printf("B\n");
	} else if (n >= 60) {
		printf("C\n");
	} else {
		printf("F\n");
	}

	return 0;
}

