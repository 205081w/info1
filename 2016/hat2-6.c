#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int n;

	n = getn();
	printf("%d = 0x%x\n", n, n);

	return 0;
}

