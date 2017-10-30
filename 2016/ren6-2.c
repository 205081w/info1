#include <stdio.h>

int main() {
	int i;
	double ave;
	int arA[] = {5, 1, 9, 4, 8, 3, 7};

	for (i = 0; i < 7; i++) {
		ave += arA[i];
	}
	ave /= 7;

	printf("ave = %f\n", ave);

	return 0;
}
