#include <stdio.h>
double GetAve(int *ary, int size);
double GetAve2(int *ary, int size);
void CalcMaxMin(int *ary, int size, int *max, int *min);
void CalcMaxMin2(int *ary, int size, int *max, int *min);

int main()
{
  int score[32];
  int max, min, num, i;
  double ave;

  printf("Input students number:");
  scanf(" %d", &num);               //生徒数の入力
  printf("Input scores:\n");
  for(i=0;i<num;i++){
    scanf(" %d", &score[i]);	    //配列の各要素に値を入力
  }

  ave = GetAve(score, num);
  printf("average:%.2f\n", ave);

  CalcMaxMin(score, num, &max, &min);
  printf("max:%d, min:%d\n", max, min);

  return 0;
}

double GetAve(int *ary, int size)
//平均値を返す関数
//ary:点数配列の先頭アドレス
//size:要素数
//返却値：平均値
{
  int i;
  double sum=0.0;
  for(i=0;i<size;i++){
    sum += ary[i];
  }
  return (sum/size);
}
double GetAve2(int *ary, int size)
//平均値を返す関数
//ary:点数配列の先頭アドレス
//size:要素数
//返却値：平均値
{
  int i;
  double sum=0.0;
  for(i=0;i<size;i++){
    sum += *ary++;       //ポインタ記法
  }
  return (sum/size);
}

void CalcMaxMin(int *ary, int size, int *max, int *min)
//最大値最小値を求める
//ary:配列
//max:最大値を格納する変数のアドレス
//min:最小値を格納する変数のアドレス
{
  int i;
  *max=*min=ary[0];
  for(i=1; i<size ; i++){
    if( *max < ary[i] ) *max = ary[i];     //配列記法
    if( *min > ary[i] ) *min = ary[i];
  }
  //  *max=*min=*ary++;
  //for(i=1; i<size ; i++){
    //if( *max < *ary ) *max = *ary;   //ポインタ記法
    //if( *min > *ary ) *min = *ary;   //ポインタ記法
    // ary++;
  //}
}
void CalcMaxMin2(int *ary, int size, int *max, int *min)
//最大値最小値を求める
//ary:配列
//max:最大値を格納する変数のアドレス
//min:最小値を格納する変数のアドレス
{
  int i;
  *max=*min=*ary++;
  for(i=1; i<size ; i++){
    if( *max < *ary ) *max = *ary;   //ポインタ記法
    if( *min > *ary ) *min = *ary;   //ポインタ記法
   ary++;
  }
}
