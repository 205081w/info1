#include <stdio.h>
int ToLower(char *str);

int main(int argc, char **argv)
{
  if(argc != 2){
    printf("Usage:%s test\n", argv[0]);
    return 0;
  }
  printf("%s\n", argv[1]);  // �ϊ��O������̏o��
  ToLower(argv[1]);
  printf("%s\n", argv[1]);  // �ϊ��㕶����̏o��
  
  return 0;
}


int ToLower(char *str)      // ���ׂď������ɂ���֐�
// str:�ϊ��Ώۂ̕�����
// �ԋp�l�F�ϊ�������
{
  int cnt = 0;  
  for(cnt = 0; str[cnt] != '\0'; cnt++) { // ������̏I���܂Łi�k�������܂Łj
    if(str[cnt] <= 'Z') {    // �啶���̏ꍇ
      str[cnt] += ('a'-'A'); // �������ɕϊ�����I�t�Z�b�g�𑫂�
    }
  }
  return cnt;
}
