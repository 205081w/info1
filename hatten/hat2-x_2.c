// 発展問題
// 入力された金額に対して、税率8%の消費税込の金額を出力するプログラムを作成せよ

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
    int n;

    n = getn();

    printf("%d yen tax included is %d\n", n, n*108/100);

    return 0;
}
