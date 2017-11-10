#include <stdio.h>
int StringCopy(char *src, char *dst);   //$BJ8;zNs%3%T!<4X?t(B
int StringCopy2(char *src, char *dst);  //$BJ8;zNs%3%T!<4X?t(B
void StringCopy3(char *src, char *dst); //$BJ8;zNs%3%T!<4X?t(B

int main()
{
  char str[]="Hello KUT!";
  char str2[64];
  int num;

  num=StringCopy(str, str2);
  printf("str :%s\n", str);
  printf("str2:%s\n", str2);
  printf("%d characters\n", num);
  return 0;
}

int StringCopy(char *src, char *dst)
//src$BJ8;zNs$+$i(Bdst$BJ8;zNs$K%3%T!<(B. 
//src:$B%3%T!<85J8;zNs$N@hF,%"%I%l%9(B
//dst:$B%3%T!<@hJ8;zNs$N@hF,%"%I%l%9(B
//$BJV5QCM(B:$BJ8;z$N8D?t(B
{
  int cnt=0;
  while(*src){
    *dst++ = *src++;  //$B%]%$%s%?5-K!(B
    cnt++;
  }
  *dst='\0';      //$B%L%kJ8;z$rBeF~$9$k$3$H(B. 
                  //$B%L%kJ8;z8!=P$G%k!<%W$rH4$1$k$N$G%L%kJ8;z$O%3%T!<$5$l$F$$$J$$(B
  return cnt;
}

int StringCopy2(char *src, char *dst)
//src$BJ8;zNs$+$i(Bdst$BJ8;zNs$K%3%T!<(B. 
//src:$B%3%T!<85J8;zNs$N@hF,%"%I%l%9(B
//dst:$B%3%T!<@hJ8;zNs$N@hF,%"%I%l%9(B
//$BJV5QCM(B:$BJ8;z$N8D?t(B
{
  int cnt=0;
  while(src[cnt] !='\0'){
    dst[cnt] = src[cnt];   //$BG[Ns5-K!(B
    cnt++;
  }
  dst[cnt]='\0';  //$B%L%kJ8;z$rBeF~$9$k$3$H(B. 
                  //$B%L%kJ8;z8!=P$G%k!<%W$rH4$1$k$N$G%L%kJ8;z$O%3%T!<$5$l$F$$$J$$(B
  return cnt;
}

int StringCopy(char *src, char *dst)
//src$BJ8;zNs$+$i(Bdst$BJ8;zNs$K%3%T!<(B. 
//src:$B%3%T!<85J8;zNs$N@hF,%"%I%l%9(B
//dst:$B%3%T!<@hJ8;zNs$N@hF,%"%I%l%9(B
{
  while(*src){
    *dst++ = *src++;  //$BJ8;z?t%+%&%s%H$7$J$$$J$i%7%s%W%k!#JQ?tITMW(B
  }
  *dst='\0';      //$B%L%kJ8;z$rBeF~$9$k$3$H(B. 
                  //$B%L%kJ8;z8!=P$G%k!<%W$rH4$1$k$N$G%L%kJ8;z$O%3%T!<$5$l$F$$$J$$(B
}
