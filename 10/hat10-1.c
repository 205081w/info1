#include <stdio.h>

int main()
{
  char familyName[32];
  char firstName[32];

  //char name[];  //配列の要素数を指定しない宣言はできない
  //char name[]="name";でサイズを指定しないように見えるが文字の個数が決まっているからサイズも決まる

  printf("Input family name:");
  scanf(" %s", familyName);    //配列の名前は先頭アドレスであり&をつけなくとも先頭アドレスを渡している
  printf("Input fisrtName:");
  scanf(" %s", firstName);     //配列の名前は先頭アドレスであり&をつけなくとも先頭アドレスを渡している

  printf("¥nName:%s %s¥n", familyName, firstName);

  return 0;
}
