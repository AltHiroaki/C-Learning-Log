#include <stdio.h>
int main(void){
    int a,b,sum=0,cnt=0;
    printf("��̐�������͂��Ă��������B");
    printf("����a:");scanf("%d",&a);    
    printf("����b:");scanf("%d",&b);
    if(a>=b){
        do
        {
            sum=sum+b;
            b=b+1;
            cnt=cnt+1;
        } while (a>=b);
        printf("%d�ȏ�%d�ȉ��̒l�̍��v�l��%d�ł�����",b-cnt,a,sum);
        
    }else{
        do
        {
            sum=sum+a;
            a=a+1;
            cnt=cnt+1;
        } while (b>=a);
        printf("%d�ȏ�%d�ȉ��̒l�̍��v�l��%d�ł�����",a-
        cnt,b,sum);
        
    }
    return 0;
}