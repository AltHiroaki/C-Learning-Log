//読み込んだ二つの整数値の差を求めて表示（条件演算子
#include <stdio.h>
int main(void){
    int a,b;
    printf("二つの整数値を入力せよ。");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    printf("読み込んだ二つの整数値の差は%dです！",a>b?a-b:b-a);
    return 0;
}
