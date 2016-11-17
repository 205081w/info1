#include <stdio.h>

int main() {
    int a = 100;
    int ret;

    ret = printf("a = %d\n", a);
    if (ret == -1) {
        printf("Faild print output\n");
    } else {
        printf("Success %d charactors output\n", ret);
    }

    return 0;
}
