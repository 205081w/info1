#include <stdio.h>
#include <stdlib.h> //関数atoiを使うために必要

int main(int argc, char **argv)
{
  int val1, val2;
  if(argc != 3){
    printf("Usage:%s int int\n", argv[0]);
    return 0;
  }
  val1 = atoi(argv[1]);  //数字文字列を整数に変換
  val2 = atoi(argv[2]);  //数字文字列を整数に変換
  
  printf("%d + %d = %d\n", val1, val2, val1+val2);

  return 0;
}
