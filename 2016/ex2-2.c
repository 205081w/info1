#include <stdio.h>

int main() {
	 int a = 100, b = 23;

	 printf("%4d + %4d = %4d\n", a, b, a+b);
	 printf("%4d - %4d = %4d\n", a, b, a-b);
	 printf("%4d * %4d = %4d\n", a, b, a*b);
	 printf("%4d / %4d = %4d ... %3d\n", a, b, a/b, a%b);

	 return 0;
	 }
