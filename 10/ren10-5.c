#include <stdio.h>

int main()
{
  int array[10];
  int i;

  printf("input 10 numbers:\n");
  for( i=0 ; i<10 ; i++){
    scanf("%d", &array[i]);     //scanf$B$GG[Ns$N3FMWAG$K@0?t$rF~NO(B
  }
  
  for( i=0 ; i<10 ; i++){
    printf("%5d", array[i]);  
    if( (i+1)%5==0) printf("\n");  //5$BJ8;zKh$K2~9T(B
  }
  printf("\n");
  return 0;
}
