//���K2: �֐� swap ���쐬���A2�̐����̒l����������v���O�����������Ă݂Ă��������i�|�C���^���g���܂��j�B
#include <stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(void){
    int x1,x2;
    printf("���͂��Ă��ꂽ�����t�ɂ����Ⴄ��[��\n");
    printf("����x1:");scanf("%d",&x1);
    printf("����x2:");scanf("%d",&x2);
    swap(&x1,&x2);
    printf("�t�ɂ����...����x1:%d,����x2:%d�ɂȂ����Ⴂ�܂����I",x1,x2);
    return 0;
}