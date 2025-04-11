//読み込んだ整数値が正であれば偶数/奇数の別を判定して表示
#include <stdio.h>
int main(void){
    int a;
    printf("整数値を入力してください");
    scanf("%d",&a);
    if(a>0)
     if (a%2==0)
      printf("この整数値は偶数である。");
     else 
      printf("この整数値は奇数である");
    else
    printf("この整数値は負または０である。");
    return 0;
}