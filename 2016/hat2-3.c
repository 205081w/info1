#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	double r = 5.0;
	double n = 3.14;

	printf("area = %10.3f\n", r*r*n);
	printf("length = %10.3f\n", 2*r*n);

	return 0;
}
