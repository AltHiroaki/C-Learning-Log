//読み込んだ整数値は0かどうか
#include <stdio.h>
int main(void){
    int n;
    printf("整数値を入力してください！０かどうか判断します！");
    scanf("%d",&n);
    if (n)
     printf("これは０ではありません！");
    else 
     printf("これは０です");
    return 0;

}