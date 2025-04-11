//読み込んだ２つの実数値は等しいか
#include <stdio.h>
int main(void){
    int x,y;
    printf("整数値xを入力してください");
    scanf("%d",&x);
    printf("整数値yを入力してください");
    scanf("%d",&y);
    if (x==y)
     printf("xとyの整数値は同じです。");
    else 
     printf("xとyの整数値は同じではありません");
    return 0;
}