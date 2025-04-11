//読み込んだ実数値を０までカウントダウン（その１）
#include <stdio.h>
int main(void){
    int no;
    if(no>=0){
    printf("整数を入力してくだ浅井:");scanf("%d",&no);
    while (no>=0)
    {
        printf("%d ",no);
        no--; printf("\n");
    }
    }else{
    }
    return 0;
}