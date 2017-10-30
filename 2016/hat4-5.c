#include <stdio.h>

int main() {
	int i, mony;
	double interest;

	i = 0;
	mony = 100000;
	while (interest <= 10000) {
		i++;
		interest += (mony * 0.005);
	}
	printf("interest = %.0f\n", interest);
	printf("year = %d\n", i);

	return 0;
}

