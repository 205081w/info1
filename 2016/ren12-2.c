#include <stdio.h>
#include <stdlib.h> //�֐�atoi���g�����߂ɕK�v

int main(int argc, char **argv)
{
  int val1, val2;
  if(argc != 3){
    printf("Usage:%s int int\n", argv[0]);
    return 0;
  }
  val1 = atoi(argv[1]);  //����������𐮐��ɕϊ�
  val2 = atoi(argv[2]);  //����������𐮐��ɕϊ�
  
  printf("%d + %d = %d\n", val1, val2, val1+val2);

  return 0;
}
