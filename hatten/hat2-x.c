// 発展問題
// プログラムAを以下のエラーメッセージが出るように改造せよ
// hat2-1.c: In function ‘main’:
// hat2-1.c:5: error: ‘sum’ undeclared (first use in this function)
// hat2-1.c:5: error: (Each undeclared identifier is reported only once
// hat2-1.c:5: error: for each function it appears in.)

// プログラムA
#include <stdio.h>

int main()
{
    int a = 5, b = 6, sum;

    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}

// 解答例
#include <stdio.h>

int main()
{
    int a = 5, b = 6;

    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}

