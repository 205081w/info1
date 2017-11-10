#include <stdio.h>
double GetAve(int *ary);  //番兵法による平均
double GetAve2(int *ary);  //番兵法による平均
void CalcMaxMin(int *ary,int *max, int *min); ///番兵法による最大最小
void CalcMaxMin2(int *ary,int *max, int *min); ///番兵法による最大最小

int main()
{
  int score[128];
  int max, min, i;
  double ave;

  printf("Input scores(-1:end):\n");
  for(i=0;i<128;i++){
    scanf(" %d", &score[i]);	    //配列の各要素に値を入力
    if(score[i]==-1) break;         //-1が入力されたら終了
  }
  if(i==128) {
    printf("Memory size over\n");
    return 0;
  }

  ave = GetAve(score);
  printf("average:%.2f\n", ave);

  CalcMaxMin(score, &max, &min);
  printf("max:%d, min:%d\n", max, min);

  return 0;
}

double GetAve(int *ary)
//平均値を返す関数
//ary:点数配列の先頭アドレス
//size:要素数
//返却値：平均値
{
  int i;
  double sum=0.0;
  for( i=0 ; ary[i]!=-1 ; i++ ){
    sum += ary[i];
  }
  return (sum/i);
}
double GetAve2(int *ary)
//平均値を返す関数
//ary:点数配列の先頭アドレス
//size:要素数
//返却値：平均値
{
  int i;
  double sum=0.0;
  for( i=0 ; *ary!=-1 ; i++ ){
    sum += *ary++;
  }
  return (sum/i);
}


void CalcMaxMin(int *ary, int *max, int *min)
//最大値最小値を求める
//ary:配列
//max:最大値を格納する変数のアドレス
//min:最小値を格納する変数のアドレス
{
  int i;
  *max=*min=*ary;
  for(i=1; ary[i]!=-1 ; i++){
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
void CalcMaxMin2(int *ary, int *max, int *min)
//最大値最小値を求める
//ary:配列
//max:最大値を格納する変数のアドレス
//min:最小値を格納する変数のアドレス
{
  int i;
  *max=*min=*ary++;
  for(i=1; *ary!=-1 ; i++){
    if( *max < *ary ) *max = *ary;   //ポインタ記法
    if( *min > *ary ) *min = *ary;   //ポインタ記法
    ary++;
  }
}
