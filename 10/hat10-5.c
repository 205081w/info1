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
  scanf(" %d", &num);               //$B@8EL?t$NF~NO(B
  printf("Input scores:\n");
  for(i=0;i<num;i++){
    scanf(" %d", &score[i]);	    //$BG[Ns$N3FMWAG$KCM$rF~NO(B
  }

  ave = GetAve(score, num);
  printf("average:%.2f\n", ave);

  CalcMaxMin(score, num, &max, &min);
  printf("max:%d, min:%d\n", max, min);

  return 0;
}

double GetAve(int *ary, int size)
//$BJ?6QCM$rJV$94X?t(B
//ary:$BE@?tG[Ns$N@hF,%"%I%l%9(B
//size:$BMWAG?t(B
//$BJV5QCM!'J?6QCM(B
{
  int i;
  double sum=0.0;
  for(i=0;i<size;i++){
    sum += ary[i];
  }
  return (sum/size);
}
double GetAve2(int *ary, int size)
//$BJ?6QCM$rJV$94X?t(B
//ary:$BE@?tG[Ns$N@hF,%"%I%l%9(B
//size:$BMWAG?t(B
//$BJV5QCM!'J?6QCM(B
{
  int i;
  double sum=0.0;
  for(i=0;i<size;i++){
    sum += *ary++;       //$B%]%$%s%?5-K!(B
  }
  return (sum/size);
}

void CalcMaxMin(int *ary, int size, int *max, int *min)
//$B:GBgCM:G>.CM$r5a$a$k(B
//ary:$BG[Ns(B
//max:$B:GBgCM$r3JG<$9$kJQ?t$N%"%I%l%9(B
//min:$B:G>.CM$r3JG<$9$kJQ?t$N%"%I%l%9(B
{
  int i;
  *max=*min=ary[0];
  for(i=1; i<size ; i++){
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
void CalcMaxMin2(int *ary, int size, int *max, int *min)
//$B:GBgCM:G>.CM$r5a$a$k(B
//ary:$BG[Ns(B
//max:$B:GBgCM$r3JG<$9$kJQ?t$N%"%I%l%9(B
//min:$B:G>.CM$r3JG<$9$kJQ?t$N%"%I%l%9(B
{
  int i;
  *max=*min=*ary++;
  for(i=1; i<size ; i++){
    if( *max < *ary ) *max = *ary;   //$B%]%$%s%?5-K!(B
    if( *min > *ary ) *min = *ary;   //$B%]%$%s%?5-K!(B
   ary++;
  }
}
