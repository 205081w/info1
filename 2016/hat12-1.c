#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  double val1, val2;
  if(argc!=3){
    printf("usage:%s double double\n", argv[0]);
    return 0;
  }
  val1 = atof(argv[1]); // ����������������ɕϊ�
  val2 = atof(argv[2]); // ����������������ɕϊ�

  printf("%f/%f=%f\n", val1, val2, val1/val2);

  return 0;
}
