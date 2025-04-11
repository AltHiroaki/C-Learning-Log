//問題1: 二つの整数値のうち最大値を求める関数
#include <stdio.h>
int max(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int x1,x2;
    printf("二つの整数値を打ってくれたら大きい方を表示すると約束しよう。");
    printf("整数x1:");scanf("%d",&x1);printf("整数x2:");scanf("%d",&x2);
    printf("最大値は%dです。",max(x1,x2));
}