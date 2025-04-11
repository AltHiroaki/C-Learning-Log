//読み込んだ二つの整数値の大きい方の値を表示
#include <stdio.h>
int main(void){
    int a,b;
    printf("整数値を二つ入力せよ。");
    scanf("%d",&a);    scanf("%d",&b);
    if (a>b)
     printf("%d",a);
    else 
     printf("%d",b);
    return 0;
}