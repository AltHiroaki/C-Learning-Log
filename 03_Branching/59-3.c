//59-2を条件演算子でやってみよう
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("整数値を３つ入力してください。");
    printf("整数aを入力してください:");scanf("%d",&a);
    printf("整数bを入力してください:");scanf("%d",&b);
    printf("整数cを入力してください:");scanf("%d",&c);
    int min=a<b ? a:b;
    if (min>c)
     min=c;
    printf("３つの整数値は%dです。",min);

}