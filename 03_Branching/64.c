//��̐����l��ǂݍ��݁A��̍����P�O�ȉ��ƂP�P�ȏ�ŏo�͂�����B 
#include <stdio.h>
int main(void){
    int a,b;
    printf("�����l���ǂݍ��݂����B\n");
    printf("����a:");scanf("%d",&a);
    printf("����b:");scanf("%d",&b);
    int index;
    index=a-b;
    if(index<=10){
        printf("��̐����l�̍��͂P�O�ȉ��ŁA%d�ł���B",index);
    }else{
        printf("��̐����l�̍��͂P�O�ȏ�ŁA%d�ł���B",index);
    }
    return 0;
}