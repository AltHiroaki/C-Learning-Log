#include <stdio.h>
int main(void){
    
    int x,y;
    int sum=0;
    int cnt=0;
    printf("二つの整数を入力せよ。");
    printf("整数a:");scanf("%d",&x);
    printf("整数b:");scanf("%d",&y);
    do
    {
        sum=sum+x;
        cnt=cnt+1;
        x=x+cnt;
    } while (
        cnt>x-y
    );
    printf("x以上y以下の全整数の和は%dです。",sum);
    return 0;
}