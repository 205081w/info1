// 発展問題
// 発展問題5-3の結果1~4についてを入力された高さの図を出力できるように変更せよ。
// ただし、結果4の高さは奇数の場合だけでよい

// 結果2
// height = 5
// *
// **
// ***
// ****
// *****
//
// height = 3
// *
// **
// ***

// 解答例 hat5-3-2
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

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
