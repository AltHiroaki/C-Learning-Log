//�ǂݍ��񂾓�̐����l�̑傫�����Ə������ق��̒l�����߂ĕ\��
#include <stdio.h>
int main(void){
    int a,b;
    printf("��̐����l����͂��Ă�������.");
    printf("�܂��͐���a����͂��Ă�������:\n");
    scanf("%d",&a);
    printf("���ɐ���b����͂��Ă�������:");
    scanf("%d",&b);
    int max,min;
    if (a>b){
        max=a;min=b;
    }else{
        max=b;min=a;
    }
    printf("�傫�����̒l��%d�f�X",max);
    printf("���������̒l��%d�f�X",min);

}