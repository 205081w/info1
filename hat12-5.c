#include <stdio.h>
#include <stdlib.h>
double GetAve(int *ary, int size);  
void CalcMaxMin(int *ary, int size, int *max, int *min);
void PrintArray(int *ary, int size); 

int main(int argc, char **argv)
{
  int array[128];   // 生徒の数は128以下とする
  int i, num, max, min;
  double ave;

  if( argc != 2 ) {
    printf("Usage:%s num\n num:number of students(max = 128)\n", argv[0]);
    return 0;
  } 

  num = atoi(argv[1]);
  if( (num > 128) || (num < 0) ){
    printf("Exceed maximum array size(max = 128)\n");
    return 0;
  }

  for(i = 0; i < num; i++){
    printf("input value:");
    scanf(" %d", &array[i]);
  }
  ave = GetAve(array, num);
  CalcMaxMin(array, num, &max, &min);
  printf("average = %f, max = %d, min = %d\n", ave, max, min);
  //  PrintArray(array, num);
  return 0;
}

double GetAve(int *ary, int size) // 平均値を返す関数
//ary:点数配列の先頭アドレス
//size:要素数
//返却値: 平均値
{
  int i;
  double sum=0.0;
  for(i = 0; i < size; i++){
    sum += ary[i];
  }
  return (sum/size);
}

void CalcMaxMin(int *ary, int size, int *max, int *min) // 最大値最小値を求める
//ary:配列の先頭アドレス
//max:最大値を格納する変数のアドレス
//min:最小値を格納する変数のアドレス
{
  int i;
  *max=*min=ary[0];
  for(i = 1; i < size; i++){
    if(*max < ary[i]) *max = ary[i];
    if(*min > ary[i]) *min = ary[i];
  }
}

void PrintArray(int *ary, int size)
{
  int i;
  for(i = 0; i < size; i++){
    printf("%5d", ary[i]);
  }
  printf("\n");
}
