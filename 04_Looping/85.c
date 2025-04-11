//読み込んだ整数値までカウントアップ
#include <stdio.h>
int main(void){
    int no,cnt=0;
    printf("整数を入力してください。");scanf("%d",&no);
    while(cnt<=no){
        printf("%d ",cnt++);
    }
    return 0;
}