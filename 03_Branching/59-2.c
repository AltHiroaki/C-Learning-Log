//3�Â̐����l��ǂݍ���ōŏ��l��\������v���O����������
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("�����l���R���͂��Ă��������B");
    printf("����a����͂��Ă�������:");scanf("%d",&a);
    printf("����b����͂��Ă�������:");scanf("%d",&b);
    printf("����c����͂��Ă�������:");scanf("%d",&c);
    int min=a;
    if(min>b) 
     min=b;
    if(min>c)
     min=c;
    printf("�O�̐����l�̍Œ�l��%d�ł�",min);
    return 0;
}