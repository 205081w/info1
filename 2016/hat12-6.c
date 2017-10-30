#include <stdio.h>
int ToUpper(char *str);

int main(int argc, char **argv)
{
  if(argc != 2){
    printf("Usage:%s test\n", argv[0]);
    return 0;
  }
  printf("%s\n", argv[1]);  // 変換前文字列の出力
  ToUpper(argv[1]);
  printf("%s\n", argv[1]);  // 変換後文字列の出力
  
  return 0;
}


int ToUpper(char *str)      // すべて大文字にする関数
// str:変換対象の文字列
// 返却値：変換した個数
{
  int cnt = 0;  
  for(cnt = 0; str[cnt] != '\0'; cnt++) { // 文字列の終わりまで（ヌル文字まで）
    if(str[cnt] >= 'a') {    // 小文字の場合
      str[cnt] += ('A'-'a'); // 大文字に変換するオフセットを足す
    }
  }
  return cnt;
}
