//読み込んだ整数値の最下位桁が５であるか
#include <stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    if ((x % 10)==5)
     printf("この数字の最下位桁は５である");
    else 
     printf("この数字の最下位桁は５ではありません");
    return 0;
}