//読み込んだ整数値は偶数か否か
#include <stdio.h>
int main(void){
    int n;
    printf("整数を入力してください。偶数か否かを判定します。");
    scanf("%d",&n);
    if (n % 2)
     printf("これは整数ではありません！！なんと");
    else 
     printf("これは整数です！なんと");
    return 0;
}