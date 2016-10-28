#include <stdio.h>

int main() {
	int i, odd, even;
	
	i = 1;
	odd = 0;
	even = 0;
	while (i <= 100) {
		if (i % 2 == 0) {
			even += i;
		} else {
			odd += i;
		}
		i++;
	}
	printf("even = %d\n", even);
	printf("odd = %d\n", odd);

	return 0;
}
