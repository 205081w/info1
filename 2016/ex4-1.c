#include <stdio.h>

int main() {
	int i;

	i = 1;
	while (i <= 50) {
		printf("%5d", i);
		i = i + 1;
	}
	return 0;
}
