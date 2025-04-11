//読み込んだ整数値をカウントダウン（その２）
//追加条件　0ではなく１までカウントダウン
//          入力された値が０以下であるときには、改行を行わない
#include <stdio.h>
int main(void){
    int no;
    printf("正の整数を入力せよ。");
    scanf("%d",&no);
    if(no>=0){
    while (no>=1)
    {
        printf("%d ",no--);
    }
    printf("\n");
    }else{}
    return 0;
}