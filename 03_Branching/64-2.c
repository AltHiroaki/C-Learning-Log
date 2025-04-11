//二つの整数値の差が10以下と１１以上で表示、評価せよ。||の使用が必須である。
#include <stdio.h>
int main(void){
    int a,b;
    printf("整数値を二つ入力せよ。\n");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    if((a>b && a-b<=10)||(b>a && b-a<=10)){
        printf("二つの整数値の差は１０以内である。");
    }
    else{
        printf("二つの整数値の差は11以上である。");
    }
    return 0;
}