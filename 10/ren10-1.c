#include <stdio.h>

int main()
{
  char str[]="Hello";  //文字列リテラルでの初期化
  char str2[]={'H','e','l','l','o','\0'}; //文字型配列への正統派初期化. 最後にヌル文字を代入する.
  int i;

  printf("str=%s\n", &(str[1]));  //2$BHVL\$NJ8;z$N%"%I%l%9$rEO$9(B
  printf("str=%s\n",  str+1 );    //$B%"%I%l%91i;;$J$i@hF,%"%I%l%9$K-5$rB-$;$P$h$$(B
  printf("str2=%s\n", &(str2[0])); 
  for(i=0;i<6;i++){
    printf("char=%c, code=0x%02x\n", str[i], str[i]);  			       
  }

  return 0;
}
