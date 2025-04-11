//練習1: 2つの整数を引数に取り、その積を返す関数 multiply を作成し、呼び出して結果を表示するプログラムを書いてみましょう。
#include <stdio.h>
int multiply(int x,int y){
    return x*y;
}
int main(void){
    int x1,x2;
    printf("掛け算したいよね");
    printf("整数A:");scanf("%d",&x1);
    printf("整数B:");scanf("%d",&x2);
    printf("掛け算の結果は%dです。",multiply(x1,x2));
}