#include <stdio.h>

#define BUFSIZE 128

int main() {
    int i = 0;
    char name[BUFSIZE];

    printf("Input your name: ");
    scanf("%[^\n]", name);
    while (1) {
        if (!name[i]) {
            break;
        }
        printf("%c", name[i++]);
    }

    return 0;
}
