//�ǂݍ��񂾐����l���R�Ŋ�������]��\���iswitch���j
#include <stdio.h>
int main(void){
    int a;
    printf("�ǂݍ��񂾐����l���R�Ŋ�������]��\�������");
    scanf("%d",&a);
    switch(a % 3){               //a%3��
    case 0 :printf("3�Ŋ���؂�܂�");break;     //0�ł����
    case 1 :printf("1�]��܂�");break;          //1�ł����
    case 2 :printf("2�]��܂�");break;           //2�ł����
    }
    return 0;
}