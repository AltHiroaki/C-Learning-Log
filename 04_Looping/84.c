//読み込んだ整数値をカウントダウン（その２）
#include <stdio.h>
int main(void){
    int no;
    printf("正の整数を入力せよ。");
    scanf("%d",&no);
    while (no>=0)
    {
        printf("%d ",no--);
    }
    printf("\n");
    return 0;
}