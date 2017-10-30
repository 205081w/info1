#include <stdio.h>

int main()
{
	int num = 65, a = 5;
	char ch = 'z';
	double f = 12.345;

	printf("sample text\n");
	printf("num = %d\n", num);
	printf("ch = %c, f = %f\n", ch, f);
	printf("a = %3d\n", a);
	printf("num = %d = %c\n", num, num);
	printf("ch = \t%3d = \t%c\n", ch, ch);

	return 0;
}
