//�ǂݍ��񂾐����l�����ł���΋���/��̕ʂ𔻒肵�ĕ\��
#include <stdio.h>
int main(void){
    int a;
    printf("�����l����͂��Ă�������");
    scanf("%d",&a);
    if(a>0)
     if (a%2==0)
      printf("���̐����l�͋����ł���B");
     else 
      printf("���̐����l�͊�ł���");
    else
    printf("���̐����l�͕��܂��͂O�ł���B");
    return 0;
}