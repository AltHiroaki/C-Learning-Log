//演習4-2 +-+-+-と入力された数だけ出力せよ
#include <stdio.h>
int main(void){
    int no;
    do{
        prontf("個数を入力せよ。:");
        scanf("%d",&no);
        if(no<0){
            printf("0以下は入力しないで");
        }
    }while(no>=0);
    if(no%2){
        do{
            
        }
    }
}