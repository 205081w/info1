#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, num;
    int array[32];
    if (argc==1) {
        printf("Usage: %s number(max = 32)\n", argv[0]);
        return 0;
    } 

    num = atoi(argv[1]);
    if ((num > 32) || (num<0)) { // 配列サイズを超えた時
        printf("input number less than 33\n");
        return 0;
    }

    for (i = 0; i < num; i++) { // 標準入力から配列の要素に値を格納
        printf("input value:");
        scanf(" %d", array+i);
        // scanf(" %d", &array[i]);
    }

    for (i = 0; i < num; i++) { // 配列の中身を出力
        printf("%5d", *(array+i));
        // printf("%5d", array[i]);
    }

    printf("\n");

    return 0;
}

