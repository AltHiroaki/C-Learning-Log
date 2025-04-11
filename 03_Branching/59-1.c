//59.cをif文で（二つの整数値の差を出す）
#include <stdio.h>
int main(void){
    int a,b;
    printf("二つの整数値を入力せよ。");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    if (a>b)
     printf("二つの整数値の差は%dです",a-b);
    else
     printf("二つの整数値の差は%dです",b-a);
    return 0;
}