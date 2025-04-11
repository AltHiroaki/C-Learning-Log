//整数を入力し、入力した整数に絶対値を出力する
#include <stdio.h>
int main(void){
    int a;
    printf("整数を入力してください。入力した整数に絶対値を出力します。:");
    scanf("%d",&a);
    if (a<0)
     printf(a*-1);
    else 
     printf(a);
    return 0;
}