//���K1: 2�̐����������Ɏ��A���̐ς�Ԃ��֐� multiply ���쐬���A�Ăяo���Č��ʂ�\������v���O�����������Ă݂܂��傤�B
#include <stdio.h>
int multiply(int x,int y){
    return x*y;
}
int main(void){
    int x1,x2;
    printf("�|���Z���������");
    printf("����A:");scanf("%d",&x1);
    printf("����B:");scanf("%d",&x2);
    printf("�|���Z�̌��ʂ�%d�ł��B",multiply(x1,x2));
}