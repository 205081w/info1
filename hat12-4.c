#include <stdio.h>
#include <string.h> // strlenに必要

int StringLength(char *str);

int main(int argc, char **argv)
{
  int len;

  //  len=StringLength(argv[0]);// 自作関数による文字数カウント
  len = strlen(argv[0]);        // 標準ライブラリ関数strlen(文字数を返す関数)
  printf("%d characters\n", len);

  return 0;
}

int StringLength(char *str)
// str: 対象の文字列
// 返却値: 文字列の長さ
{
  int len=0;

  while(*str++){  // ヌル文字に到達すると偽となり（0なので）ループ終了
    len++;
  }

  return len;
}
