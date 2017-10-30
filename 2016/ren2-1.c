#include <stdio.h>

int main() {

	printf("1. %d*%d-%d+%d*%d = %d\n", 3, 5, 6, 10, 2, 3*5-6+10*2);
	printf("2. %d*(%d-%d)+%d*%d = %d\n", 3, 5, 6, 10, 2, 3*(5-6)+10*2);
	printf("3. %d*%d/%d = %d\n", 3, 6, 5, 3*6/5);
	printf("3. %d*(%d/%d) = %d\n", 3, 5, 6, 3*(6/5));
	printf("3. %d*(%d/%d) = %d\n", 3, 6, 5, 3*(5/6));

	return 0;
}
