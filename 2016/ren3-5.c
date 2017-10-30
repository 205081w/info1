#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int a, b;

	printf("a = ");
	a = getn();
	printf("b = ");
	b = getn();
	
	if (a > b) {
		printf("a=%dとb=%dではaのほうが大きい\n", a, b);
	} else {
		printf("a=%dとb=%dではbのほうが大きい\n", a, b);
	}

	return 0;
}
