#include <stdio.h>

int main() {
	int i;

	for (i = 0; i < 10; i++) {
		if (i == 4) {
			continue;
		}
		printf("%5d", i);
	}
	return 0;
}
