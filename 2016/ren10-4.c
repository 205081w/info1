#include <stdio.h>

int main() {
    char country[32], area[32], city[32], directory[32];

    printf("Input country number: ");
    scanf("%s", country);
    printf("Input area number: ");
    scanf("%s", area);
    printf("Input city number: ");
    scanf("%s", city);
    printf("Input directory number: ");
    scanf("%s", directory);

    printf("Your tell number: %s-%s-%s-%s\n", country, area, city, directory);
    return 0;

}

