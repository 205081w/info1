#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int n;
	
	printf("Input number(two digits):");
	n = getn();

	printf("The digit of ten's place = %d\n", n/10);
	printf("The digit of one's place = %d\n", n%10);

	return 0;
}
	
