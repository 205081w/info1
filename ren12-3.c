#include <stdio.h>
#include <stdlib.h> // �֐�atoi���g�����߂ɕK�v

int main(int argc, char **argv)
{
  double val;
  
  if(argc!=2){
    printf("Usage:%s double\n", argv[0]);
    return 0;
  }
  val = atof(argv[1]);   // ����������������ɕϊ�
  printf("val=%f\n", val);
  return 0;
}
