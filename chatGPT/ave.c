#include <stdio.h>
#include <math.h>
int main(void){
    int i=1;
    int ave,ave2;
    int sum=0;
    int sum2=0;
    while(1){
        int x;
        printf("�f�[�^����͂���,%d�Ԗ�",i);
        scanf("%d",&x);
        if (x==0){
            ave=sum/(i-1);
            ave2=sum2/(i-1);
            int ave3;
            ave3=ave2-(ave*ave);
            printf("���ς�%d�ŁA�W���΍���%d�ł��B",ave,ave3);
            break;
        }
        sum+=x;
        sum2+=(x*x);
        i+=1;
    }
    
}