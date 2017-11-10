#include <stdio.h>

int main()
{
  int num;
  char ch;

  printf("input number:"); //scanfで始まると止まったように見えるので入力を促す
  scanf(" %d", &num);      //整数として入力
  printf("num=%c, %x, %d\n", num, num, num); //文字, 16進数, 10進数として表示

  scanf(" %c", &ch);      //文字として入力
  printf("ch=%c, %x, %d\n", ch, ch, ch);//文字, 16進数, 10進数として表示

  return 0;
}
