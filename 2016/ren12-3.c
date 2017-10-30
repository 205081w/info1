#include <stdio.h>
#include <stdlib.h> // ŠÖ”atoi‚ğg‚¤‚½‚ß‚É•K—v

int main(int argc, char **argv)
{
  double val;
  
  if(argc!=2){
    printf("Usage:%s double\n", argv[0]);
    return 0;
  }
  val = atof(argv[1]);   // ”š•¶š—ñ‚ğÀ”‚É•ÏŠ·
  printf("val=%f\n", val);
  return 0;
}
