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

	if (n >= 10){
		printf("n = 0x%c\n", (n-10)+'A');
	} else {
		printf("n = 0x%d\n", n);
	}

	return 0;
}

