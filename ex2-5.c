#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int a, b;

	printf("a=");
	a = getn();
	printf("b=");
	b = getn();
	printf("sum = %d\n", a+b);

	return 0;
}

