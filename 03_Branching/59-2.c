//3津の整数値を読み込んで最小値を表示するプログラムをかけ
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("整数値を３つ入力してください。");
    printf("整数aを入力してください:");scanf("%d",&a);
    printf("整数bを入力してください:");scanf("%d",&b);
    printf("整数cを入力してください:");scanf("%d",&c);
    int min=a;
    if(min>b) 
     min=b;
    if(min>c)
     min=c;
    printf("三つの整数値の最低値は%dです",min);
    return 0;
}