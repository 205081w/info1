#include <stdio.h>
#include <string.h>

struct seisekiTag {
    int ID;
    char name[64];
    int english;
};

void print_seiseki(struct seisekiTag seiseki);

int main() {
    struct seisekiTag seiseki1, seiseki2;

    seiseki1.ID = 1;
    strcpy(seiseki1.name, "Taro Kochi");
    seiseki1.english = 80;

    printf("*** seiseki1 ***\n");
    print_seiseki(seiseki1);

    seiseki2 = seiseki1;
    printf("*** seiseki2 ***\n");
    print_seiseki(seiseki2);

    return 0;
}

void print_seiseki(struct seisekiTag seiseki) {
    printf("ID    %05\n", seiseki.ID);
    printf("name  %s\n", seiseki.name);
    printf("english %d\n", seiseki.english);
}

