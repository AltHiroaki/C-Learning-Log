#include <stdio.h>
int main(void){
    int a,b,sum=0,cnt=0;
    printf("二つの整数を入力してください。");
    printf("整数a:");scanf("%d",&a);    
    printf("整数b:");scanf("%d",&b);
    if(a>=b){
        do
        {
            sum=sum+b;
            b=b+1;
            cnt=cnt+1;
        } while (a>=b);
        printf("%d以上%d以下の値の合計値は%dですあき",b-cnt,a,sum);
        
    }else{
        do
        {
            sum=sum+a;
            a=a+1;
            cnt=cnt+1;
        } while (b>=a);
        printf("%d以上%d以下の値の合計値は%dですあき",a-
        cnt,b,sum);
        
    }
    return 0;
}