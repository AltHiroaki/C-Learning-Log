//���1: ��̐����l�̂����ő�l�����߂�֐�
#include <stdio.h>
int max(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int x1,x2;
    printf("��̐����l��ł��Ă��ꂽ��傫������\������Ɩ񑩂��悤�B");
    printf("����x1:");scanf("%d",&x1);printf("����x2:");scanf("%d",&x2);
    printf("�ő�l��%d�ł��B",max(x1,x2));
}