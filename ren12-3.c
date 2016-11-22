#include <stdio.h>
#include <stdlib.h> // 関数atoiを使うために必要

int main(int argc, char **argv)
{
  double val;
  
  if(argc!=2){
    printf("Usage:%s double\n", argv[0]);
    return 0;
  }
  val = atof(argv[1]);   // 数字文字列を実数に変換
  printf("val=%f\n", val);
  return 0;
}
