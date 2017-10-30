#include <stdio.h>

int main() {
    char lname[32];
    char fname[32];

    printf("Input last name: ");
    scanf("%s", lname);
    printf("Input fast name: ");
    scanf("%s", fname);

    printf("Your name: %s %s\n", lname, fname);

    return 0;
}

