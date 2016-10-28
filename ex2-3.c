#include <stdio.h>

int main() {
	double a = 11.0, b = 7.0, c = 2.0E+5;

	printf("%f / %.1f=%25.10f\n", a, b, a/b);
	printf("%.1e / %.1e=%25.10e\n", b, c, b/c);
	return 0;
}

