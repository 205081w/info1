#include <stdio.h>
int StringCopy(char *src, char *dst);   //文字列コピー関数
int StringCopy2(char *src, char *dst);  //文字列コピー関数
void StringCopy3(char *src, char *dst); //文字列コピー関数

int main()
{
  char str[]="Hello KUT!";
  char str2[64];
  int num;

  num=StringCopy(str, str2);
  printf("str :%s\n", str);
  printf("str2:%s\n", str2);
  printf("%d characters\n", num);
  return 0;
}

int StringCopy(char *src, char *dst)
//src文字列からdst文字列にコピー. 
//src:コピー元文字列の先頭アドレス
//dst:コピー先文字列の先頭アドレス
//返却値:文字の個数
{
  int cnt=0;
  while(*src){
    *dst++ = *src++;  //ポインタ記法
    cnt++;
  }
  *dst='\0';      //ヌル文字を代入すること. 
                  //ヌル文字検出でループを抜けるのでヌル文字はコピーされていない
  return cnt;
}

int StringCopy2(char *src, char *dst)
//src文字列からdst文字列にコピー. 
//src:コピー元文字列の先頭アドレス
//dst:コピー先文字列の先頭アドレス
//返却値:文字の個数
{
  int cnt=0;
  while(src[cnt] !='\0'){
    dst[cnt] = src[cnt];   //配列記法
    cnt++;
  }
  dst[cnt]='\0';  //ヌル文字を代入すること. 
                  //ヌル文字検出でループを抜けるのでヌル文字はコピーされていない
  return cnt;
}

int StringCopy(char *src, char *dst)
//src文字列からdst文字列にコピー. 
//src:コピー元文字列の先頭アドレス
//dst:コピー先文字列の先頭アドレス
{
  while(*src){
    *dst++ = *src++;  //文字数カウントしないならシンプル。変数不要
  }
  *dst='\0';      //ヌル文字を代入すること. 
                  //ヌル文字検出でループを抜けるのでヌル文字はコピーされていない
}
