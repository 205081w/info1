#include <stdio.h>

int main() {
    char str[32];
    int i;

    printf("Input strings: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("number of charracters = %d\n", i);

    return 0;
}
