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
    if ((num > 32) || (num<0)) { // �z��T�C�Y�𒴂�����
        printf("input number less than 33\n");
        return 0;
    }

    for (i = 0; i < num; i++) { // �W�����͂���z��̗v�f�ɒl���i�[
        printf("input value:");
        scanf(" %d", array+i);
        // scanf(" %d", &array[i]);
    }

    for (i = 0; i < num; i++) { // �z��̒��g���o��
        printf("%5d", *(array+i));
        // printf("%5d", array[i]);
    }

    printf("\n");

    return 0;
}

