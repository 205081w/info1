#include <stdio.h>

int main()
{
  int array[10];
  int i;

  printf("input 10 numbers:\n");
  for( i=0 ; i<10 ; i++){
    scanf("%d", &array[i]);     //scanfで配列の各要素に整数を入力
  }
  
  for( i=0 ; i<10 ; i++){
    printf("%5d", array[i]);  
    if( (i+1)%5==0) printf("\n");  //5文字毎に改行
  }
  printf("\n");
  return 0;
}
