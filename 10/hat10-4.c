#include <stdio.h>
int ToUpper(char *str);  //$B$9$Y$FBgJ8;z$KJQ49$9$k4X?t(B
int ToUpper2(char *str);

int main()
{
  char str[]="Hello KUT";
  int num;

  num = ToUpper(str);
  
  printf("%s(%d)\n", str, num);

  return 0;
}

int ToUpper(char *str)
//$B$9$Y$F>.J8;z$K$9$k4X?t(B
//str:$BJQ49BP>]$NJ8;zNs(B
//$BJV5QCM!'JQ49$7$?8D?t(B
{
  int cnt=0;
  while(*str){           //$B%]%$%s%?5-K!(B
    if( *str >= 'a'){    //$B>.J8;z$@$C$?$i(B
      *str += ('A'-'a'); //$BBgJ8;z$KJQ49$9$k%*%U%;%C%H$rB-$9(B
      cnt++;             //$BJQ49$7$?2s?t$r%$%s%/%j%a%s%H(B
    }
    str++;               //$B%"%I%l%9$r#1$DA}$d$7$F<!$NJ8;z$X(B
  }
  return cnt;
}
int ToUpper2(char *str)
//$B$9$Y$F>.J8;z$K$9$k4X?t(B
//str:$BJQ49BP>]$NJ8;zNs(B
//$BJV5QCM!'JQ49$7$?8D?t(B
{
  int i=0, cnt=0;
  while(str[i]){            //$BG[Ns5-K!(B
    if( str[i] >= 'a'){     //$B>.J8;z$@$C$?$i(B
      str[i] += ('A'-'a');  //$BBgJ8;z$KJQ49$9$k%*%U%;%C%H$rB-$9(B
      cnt++;                //$BJQ49$7$?2s?t$r%$%s%/%j%a%s%H(B
    }
    i++;                    //$BE:$(;z$r#1$DA}$d$7$F<!$NJ8;z$X(B
  }
  return cnt;
}
