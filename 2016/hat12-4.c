#include <stdio.h>
#include <string.h> // strlen�ɕK�v

int StringLength(char *str);

int main(int argc, char **argv)
{
  int len;

  //  len=StringLength(argv[0]);// ����֐��ɂ�镶�����J�E���g
  len = strlen(argv[0]);        // �W�����C�u�����֐�strlen(��������Ԃ��֐�)
  printf("%d characters\n", len);

  return 0;
}

int StringLength(char *str)
// str: �Ώۂ̕�����
// �ԋp�l: ������̒���
{
  int len=0;

  while(*str++){  // �k�������ɓ��B����ƋU�ƂȂ�i0�Ȃ̂Łj���[�v�I��
    len++;
  }

  return len;
}
