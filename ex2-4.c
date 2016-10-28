#include <stdio.h>

int main() {
	char c10 = '4', c1 = '9', c = 'A';
	int n10, n1;

	n10 = c10 -'0';
	n1 = c1 - '0';
	printf("%c%c = %4d\n", c10, c1, n10*10+n1);
	printf("%c + 11 = %c\n", c, c+11);
	return 0;
}

