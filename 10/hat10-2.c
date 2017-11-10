#include <stdio.h>

int main()
{
  char str[100];
  int cnt=0;

  printf("Input string:");
  scanf(" %s", str);

  while( str[cnt] != '¥0' ){  //ヌル文字が現れるまで繰り返す
    cnt++;
  }
  /*
  for( cnt=0 ; str[cnt]!='¥0' ; cnt++){  //繰り返し処理がないfor文でも良い
  }
  */

  /*
  for( cnt=0 ; cnt<100 ; cnt++ ){  //ヌル文字になったらループを抜ける、という処理でも良い.
    if( str[cnt]=='¥0') break;     //最後にヌル文字がないことがあるなら、こちらの方が安全
  }
  */

  /*
  //間違い例
  while(*str++){  //配列名はアドレスだがポインタではなくアドレス定数なので,
    cnt++;　　　  //値が変わるインクリメントはできない
    }*/

  printf("%d characters¥n", cnt);
  return 0;
}
