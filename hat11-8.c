#include <stdio.h>
#include <string.h>

struct seisekiTag {
    int ID;
    char name[64];
    int english;
};

void print_seiseki(struct seisekiTag *seiseki);

int main() {
    int i;
    struct seisekiTag seiseki[10], *seiseki_ptr;

    for (i = 0; i < 3; i++) {
        printf("ID ");
        scanf("%d", &(seiseki[i].ID));
        printf("name ");
        scanf("%[^\n]", seiseki[i].name);
        printf("english score ");
        scanf("%d", &(seiseki[i].english));
    }
    for (i = 0; i < 3; i++) {
        printf("\n*** seiseki[%d] ***\n", i);
        seiseki_ptr = &seiseki[i];
        print_seiseki(seiseki_ptr);
    }

    return 0;
}

void print_seiseki(struct seisekiTag *seiseki) {
    printf("ID    %05d\n", seiseki->ID);
    printf("name  %s\n", seiseki->name);
    printf("english %d\n", seiseki->english);
}

