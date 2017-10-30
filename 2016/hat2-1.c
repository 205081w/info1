#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int a, b;

	printf("A = ");
	a = getn();
	printf("B = ");
	b = getn();

	printf("**** %d と %d の計算 ****\n", a, b);
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d / %d = %d ... %d\n", a, b, a/b, a%b);

	return 0;
}

