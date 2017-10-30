#include <stdio.h>

int main(int argc, char **argv)
{
  if(argc!=3){
    printf("Usage:%s firstname familiyname\n", argv[0]);
    return 0;
  }
  printf("%s\n", argv[1], argv[2]);

  return 0;
}
