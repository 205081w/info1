#include <stdio.h>
int ToUpper(char *str);  //すべて大文字に変換する関数
int ToUpper2(char *str);

int main()
{
  char str[]="Hello KUT";
  int num;

  num = ToUpper(str);
  
  printf("%s(%d)\n", str, num);

  return 0;
}

int ToUpper(char *str)
//すべて小文字にする関数
//str:変換対象の文字列
//返却値：変換した個数
{
  int cnt=0;
  while(*str){           //ポインタ記法
    if( *str >= 'a'){    //小文字だったら
      *str += ('A'-'a'); //大文字に変換するオフセットを足す
      cnt++;             //変換した回数をインクリメント
    }
    str++;               //アドレスを１つ増やして次の文字へ
  }
  return cnt;
}
int ToUpper2(char *str)
//すべて小文字にする関数
//str:変換対象の文字列
//返却値：変換した個数
{
  int i=0, cnt=0;
  while(str[i]){            //配列記法
    if( str[i] >= 'a'){     //小文字だったら
      str[i] += ('A'-'a');  //大文字に変換するオフセットを足す
      cnt++;                //変換した回数をインクリメント
    }
    i++;                    //添え字を１つ増やして次の文字へ
  }
  return cnt;
}
