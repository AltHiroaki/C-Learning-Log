//�w�����ꂽ�ː�����������ǂݍ���ō��v�l�ƕ��ϒl��\��
#include <stdio.h>
int main(void){
    int no=0;
    printf("������͂��Ă��������B:");scanf("%d",&no);
    int a=0;
    int sum=0;
    while(a<no)
    {
        int y;
        printf("No.%d:",++a);
        scanf("%d",&y);
        sum=sum+y;

    }
    printf("���v��%d�ŁA",sum);
    printf("���ς�%.2f�ł�",(double)sum/no);
}