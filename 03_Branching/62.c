//�ǂݍ��񂾌��̋G�߂�\��
#include <stdio.h>
int main(void){
    int month;
    printf("������͂��Ă�������:");
    scanf("%d",&month);
    if (month>=3 && month<=5){
        printf("���͂������̋G�߂͏t�ł���");
    }
    else if (month>=6 && month<=8){
        printf("���͂������̋G�߂͉Ăł���");
    }
    else if (month>=9 && month<=11){
        printf("���͂������̋G�߂͏H�ł���");
    }
    else if (month==12 || month==1 || month==2){
        printf("���͂������̋G�߂͓~�ł���");
    }
    else{
        printf("���͂��ꂽ���͑��݂��܂���B");
    }
    return 0;
}