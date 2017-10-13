// 発展問題
// 発展問題5-3の結果1~4についてを入力された高さの図を出力できるように変更せよ。
// ただし、結果4の高さは奇数の場合だけでよい

// 結果4
// height = 5
//   *
//  ***
// *****
//  ***
//   *
//
// height = 3
//   *
//  ***
//   *

// 解答例 hat5-3-4
#include <stdio.h>

int getn()
{
    int x;
    fflush(stdout);
    scanf("%d", &x);
    return x;
}

int main()
{
    int n, i, j;

    printf("height = ");
    n = getn();

    // 上半分
    for (i = 0; i < n/2; i++) {
        if (i < n/2) {
            for (j = i; j < n/2; j++) {
                printf(" ");
            }
            for (j = 0; j <= i*2; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    
    // 真ん中
    for (i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // 下半分
    for(i = n/2 - 1 ; i >= 0 ; i--){
        for(j = n/2-i ; j > 0 ; j--){
            printf(" ");
        }
        printf("*");
        for(j = 0 ; j < i*2 ; j++){ 
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
