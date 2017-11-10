#include <stdio.h>
void printChars(char *str);
void printChars2(char *str);

int main()
{
  char str[]="Hello KUT!";

  printChars2(str);

  return 0;
}

void printChars(char *str)
//文字列を画面表示する関数
//str:文字列の先頭アドレス
{
  int i;
  for(i=0; str[i]!= '\0' ; i++){
    printf("%c", str[i]);        //配列表記法. こちらの方がわかりやすいと思う
  }
  printf("\n");
}

void printChars2(char *str)
//文字列を画面表示する関数
//str:文字列の先頭アドレス
{
  while(*str){
    printf("%c", *str++);   //ポインタでの表記. 変数iが不要でインクリメントすればよい
  }

  printf("\n");
}
