//�ǂݍ��񂾂R�̐����l�̍ő�l�����߂ĕ\��
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("�R�̐�������͂��Ĕ�r���܂��B");
    printf("����a:");scanf("%d",&a);    
    printf("����b:");scanf("%d",&b);
    printf("����c:");scanf("%d",&c);
    int max=a;
    if(b>max) 
     max=b;
    if(c>max)
     max=c;
    printf("�ő�l��%d�ł�",max);
    return 0;

}