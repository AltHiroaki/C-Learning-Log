//�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩
#include <stdio.h>
int main(void){
    int a;
    printf("�����l����͂��Ă��������B�����l����ł��邩�����ł��邩���肵�܂��B");scanf("%d",&a);
    switch(a%2){
        case 0:printf("�����ł���B");break;
        case 1:printf("��ł���B");break;
    }
    return 0;
}