#include <stdio.h>

int getn(){
	int x;
	fflush(stdout);
	scanf("%d",&x);
	return x;
}

int main() {
	int t = 5000;

	printf("%d hours %d minutes %d seconds\n", t/3600, (t%3600)/60, t%60);

	return 0;
	}
