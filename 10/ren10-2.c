#include <stdio.h>
void printChars(char *str);
void printChars2(char *str);

int main()
{
  char str[]="Hello KUT!";

  printChars2(str);

  return 0;
}

void printChars(char *str)
//$BJ8;zNs$r2hLLI=<($9$k4X?t(B
//str:$BJ8;zNs$N@hF,%"%I%l%9(B
{
  int i;
  for(i=0; str[i]!= '\0' ; i++){
    printf("%c", str[i]);        //$BG[NsI=5-K!(B. $B$3$A$i$NJ}$,$o$+$j$d$9$$$H;W$&(B
  }
  printf("\n");
}

void printChars2(char *str)
//$BJ8;zNs$r2hLLI=<($9$k4X?t(B
//str:$BJ8;zNs$N@hF,%"%I%l%9(B
{
  while(*str){
    printf("%c", *str++);   //$B%]%$%s%?$G$NI=5-(B. $BJQ?t(Bi$B$,ITMW$G%$%s%/%j%a%s%H$9$l$P$h$$(B
  }

  printf("\n");
}
