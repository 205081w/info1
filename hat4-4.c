#include <stdio.h>

int main() {
	int i;
	double mony;

	i = 1;
	mony = 100000.0;
	while (i <= 10) {
		mony += (mony * 0.005);
		i++;
	}
	printf("interest = %.0f\n", mony - 100000.0);

	return 0;
}

