#include <stdio.h>

struct helthTag {
    int ID;
    char lname[64];
    char fname[64];
    char sex;
    double height;
    double weight;
    char blood;
};

void print_helth(struct helthTag *helth);

int main() {
    struct helthTag helth;

    printf("ID:");
    scanf("%d", helth.ID);
    printf("last name:");
    scanf("%s", helth.lname);
    printf("fast name:");
    scanf("%s", helth.fname);
    printf("sex:");
    scanf("%c", helth.sex);
    printf("height:");
    scanf("%lf", helth.height);
    printf("weight:");
    scanf("%lf", helth.weight);
    printf("blood:");
    scanf("%c", helth.blood);

    printf("*** helth1 ***\n");
    print_helth(helth);

    return 0;
}

void print_helth(struct seisekiTag *helth) {
    printf("ID    %05d\n", helth->ID);
    printf("last name  %s\n", helth->lname);
    printf("fast name  %s\n", helth->fname);
    printf("sex %c\n", helth->sex);
    printf("height %f\n", helth->height);
}

