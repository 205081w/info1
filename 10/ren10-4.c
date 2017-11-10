#include <stdio.h>

int main()
{
  double d1, d2;

  printf("Input value1:");
  scanf("%lf", &d1);       //double型への入力の変換指定子は%lf
  printf("Input value2:");
  scanf("%lf", &d2);

  printf("%.2f + %.2f = %.2f\n", d1, d2, d1+d2);

  return 0;
}
