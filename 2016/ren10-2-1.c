#include <stdio.h>

void print(char *str);

int main() {
    char str[] = "Hello";

    print(str);

    return 0;
}

void print(char *str) {
    int i = 0;

    while (*(str+i) != '\0') {
        printf("%c\n", *(str+i));
        i++;
    }

}
