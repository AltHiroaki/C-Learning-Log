//��̐����l�̍���10�ȉ��ƂP�P�ȏ�ŕ\���A�]������B||�̎g�p���K�{�ł���B
#include <stdio.h>
int main(void){
    int a,b;
    printf("�����l�����͂���B\n");
    printf("����a:");scanf("%d",&a);
    printf("����b:");scanf("%d",&b);
    if((a>b && a-b<=10)||(b>a && b-a<=10)){
        printf("��̐����l�̍��͂P�O�ȓ��ł���B");
    }
    else{
        printf("��̐����l�̍���11�ȏ�ł���B");
    }
    return 0;
}