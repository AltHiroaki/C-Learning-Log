//�ǂݍ��񂾐��̐����l���t���ɕ\��
#include <stdio.h>
int main(void){
    int no;
    do{
        printf("��������͂��Ă��������B:");scanf("%d",&no);
        if (no<=0){
            printf("�����ł͂Ȃ�������͂��Ȃ��ł�������.\n");
        }
    }while(no<=0);
    //no��0���傫���Ȃ��Ă���B
    printf("���̐�����납��ǂނƁA");
    while(no>0){
        printf("%d",no%10);
        no/=10;
    }
    return 0;

}