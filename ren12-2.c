#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;
    if (argc<3) {
        printf("Usage: %s number1 number2\n", argv[0]);
        return 0;
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    printf("num1 + num2 = %d\n", num1+num2);

    return 0;
}

