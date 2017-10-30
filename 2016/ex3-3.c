#include <stdio.h>

int main() {
	int midterm = 67, final = 55, sum;

	sum = midterm + final;
	if (sum >= 120) {
		if (final >= 50) {
			printf("合格\n");
		} else {
			printf("再履修\n");
		}
	} else {
		printf("再履修\n");
	}

	return 0;
}
