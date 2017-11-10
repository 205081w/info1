#include <stdio.h>

int main()
{
  char str[]="Hello";  //$BJ8;zNs%j%F%i%k$G$N=i4|2=(B
  char str2[]={'H','e','l','l','o','\0'}; //$BJ8;z7?G[Ns$X$N@5E}GI=i4|2=(B.$B:G8e$K%L%kJ8;z$rBeF~$9$k(B
  int i;

  printf("str=%s\n", &(str[1]));  //2$BHVL\$NJ8;z$N%"%I%l%9$rEO$9(B
  printf("str=%s\n",  str+1 );    //$B%"%I%l%91i;;$J$i@hF,%"%I%l%9$K-5$rB-$;$P$h$$(B
  printf("str2=%s\n", &(str2[0])); 
  for(i=0;i<6;i++){
    printf("char=%c, code=0x%02x\n", str[i], str[i]);  			       
  }

  return 0;
}
