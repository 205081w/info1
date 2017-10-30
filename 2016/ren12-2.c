#include <stdio.h>
#include <stdlib.h> //ŠÖ”atoi‚ğg‚¤‚½‚ß‚É•K—v

int main(int argc, char **argv)
{
  int val1, val2;
  if(argc != 3){
    printf("Usage:%s int int\n", argv[0]);
    return 0;
  }
  val1 = atoi(argv[1]);  //”š•¶š—ñ‚ğ®”‚É•ÏŠ·
  val2 = atoi(argv[2]);  //”š•¶š—ñ‚ğ®”‚É•ÏŠ·
  
  printf("%d + %d = %d\n", val1, val2, val1+val2);

  return 0;
}
