//カウントアップ　ただし偶数のみ
#include <stdio.h>
int main(void){
    int no;
    int cnt=1;
    printf("整数を入力白や:");scanf("%d",&no);
    while (cnt<=no)
    {
        if(cnt%2){cnt++;}else{
         printf("%d" ,cnt);
        cnt++;}
    }
    return 0;
}