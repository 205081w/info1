#include <stdio.h>

int main()
{
  int num;
  char ch;

  printf("input number:"); //scanf$B$G;O$^$k$H;_$^$C$?$h$&$K8+$($k$N$GF~NO$rB%$9(B
  scanf(" %d", &num);      //$B@0?t$H$7$FF~NO(B
  printf("num=%c, %x, %d\n", num, num, num); //$BJ8;z(B, 16$B?J?t(B, 10$B?J?t$H$7$FI=<((B

  scanf(" %c", &ch);      //$BJ8;z$H$7$FF~NO(B
  printf("ch=%c, %x, %d\n", ch, ch, ch);//$BJ8;z(B, 16$B?J?t(B, 10$B?J?t$H$7$FI=<((B

  return 0;
}
