#include <stdio.h>
int main(void){
    
    int x,y;
    int sum=0;
    int cnt=0;
    printf("��̐�������͂���B");
    printf("����a:");scanf("%d",&x);
    printf("����b:");scanf("%d",&y);
    do
    {
        sum=sum+x;
        cnt=cnt+1;
        x=x+cnt;
    } while (
        cnt>x-y
    );
    printf("x�ȏ�y�ȉ��̑S�����̘a��%d�ł��B",sum);
    return 0;
}