#include <stdio.h>
int ToUpper(char *str);

int main(int argc, char **argv)
{
  if(argc != 2){
    printf("Usage:%s test\n", argv[0]);
    return 0;
  }
  printf("%s\n", argv[1]);  // �ϊ��O������̏o��
  ToUpper(argv[1]);
  printf("%s\n", argv[1]);  // �ϊ��㕶����̏o��
  
  return 0;
}


int ToUpper(char *str)      // ���ׂđ啶���ɂ���֐�
// str:�ϊ��Ώۂ̕�����
// �ԋp�l�F�ϊ�������
{
  int cnt = 0;  
  for(cnt = 0; str[cnt] != '\0'; cnt++) { // ������̏I���܂Łi�k�������܂Łj
    if(str[cnt] >= 'a') {    // �������̏ꍇ
      str[cnt] += ('A'-'a'); // �啶���ɕϊ�����I�t�Z�b�g�𑫂�
    }
  }
  return cnt;
}
