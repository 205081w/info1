#include <stdio.h>
double GetAve(int *ary);  //$BHVJ<K!$K$h$kJ?6Q(B
double GetAve2(int *ary);  //$BHVJ<K!$K$h$kJ?6Q(B
void CalcMaxMin(int *ary,int *max, int *min); ///$BHVJ<K!$K$h$k:GBg:G>.(B
void CalcMaxMin2(int *ary,int *max, int *min); ///$BHVJ<K!$K$h$k:GBg:G>.(B

int main()
{
  int score[128];
  int max, min, i;
  double ave;

  printf("Input scores(-1:end):\n");
  for(i=0;i<128;i++){
    scanf(" %d", &score[i]);	    //$BG[Ns$N3FMWAG$KCM$rF~NO(B
    if(score[i]==-1) break;         //-1$B$,F~NO$5$l$?$i=*N;(B
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
//$BJ?6QCM$rJV$94X?t(B
//ary:$BE@?tG[Ns$N@hF,%"%I%l%9(B
//size:$BMWAG?t(B
//$BJV5QCM!'J?6QCM(B
{
  int i;
  double sum=0.0;
  for( i=0 ; ary[i]!=-1 ; i++ ){
    sum += ary[i];
  }
  return (sum/i);
}
double GetAve2(int *ary)
//$BJ?6QCM$rJV$94X?t(B
//ary:$BE@?tG[Ns$N@hF,%"%I%l%9(B
//size:$BMWAG?t(B
//$BJV5QCM!'J?6QCM(B
{
  int i;
  double sum=0.0;
  for( i=0 ; *ary!=-1 ; i++ ){
    sum += *ary++;
  }
  return (sum/i);
}


void CalcMaxMin(int *ary, int *max, int *min)
//$B:GBgCM:G>.CM$r5a$a$k(B
//ary:$BG[Ns(B
//max:$B:GBgCM$r3JG<$9$kJQ?t$N%"%I%l%9(B
//min:$B:G>.CM$r3JG<$9$kJQ?t$N%"%I%l%9(B
{
  int i;
  *max=*min=*ary;
  for(i=1; ary[i]!=-1 ; i++){
    if( *max < ary[i] ) *max = ary[i];     //$BG[Ns5-K!(B
    if( *min > ary[i] ) *min = ary[i];
  }
  //  *max=*min=*ary++;
  //for(i=1; i<size ; i++){
    //if( *max < *ary ) *max = *ary;   //$B%]%$%s%?5-K!(B
    //if( *min > *ary ) *min = *ary;   //$B%]%$%s%?5-K!(B
    // ary++;
  //}
}
void CalcMaxMin2(int *ary, int *max, int *min)
//$B:GBgCM:G>.CM$r5a$a$k(B
//ary:$BG[Ns(B
//max:$B:GBgCM$r3JG<$9$kJQ?t$N%"%I%l%9(B
//min:$B:G>.CM$r3JG<$9$kJQ?t$N%"%I%l%9(B
{
  int i;
  *max=*min=*ary++;
  for(i=1; *ary!=-1 ; i++){
    if( *max < *ary ) *max = *ary;   //$B%]%$%s%?5-K!(B
    if( *min > *ary ) *min = *ary;   //$B%]%$%s%?5-K!(B
    ary++;
  }
}
