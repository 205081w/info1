// 発展問題
// みかんが500g入ったの商品を作りたい。1つあたりのみかんの重さ、500gを越えるまで入力し、500gを越えたときの最大の重さのみかんと最小の重さのみかんが何gであるかを表示するプログラムを作成せよ。
// 点数が500以上になるまで入力し、各値の合計、最大値、最小値を求めるプログラムを作成せよ。

// 解答例
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
    int n, sum, max, min;
    max = 0;
    min = 500;

    while (sum <= 500) {
        n = getn();
        sum += n;
        if (max < n) {
            max = n;
        }
        if (min > n) {
            min = n;
        }
    }
    printf("sum = %d\nmax = %d\nmin = %d\n", sum, max, min);

    return 0;
}
