//読み込んだ正の整数値を逆順に表示
#include <stdio.h>
int main(void){
    int no;
    do{
        printf("整数を入力してください。:");scanf("%d",&no);
        if (no<=0){
            printf("整数ではない数を入力しないでください.\n");
        }
    }while(no<=0);
    //noは0より大きくなっている。
    printf("その数を後ろから読むと、");
    while(no>0){
        printf("%d",no%10);
        no/=10;
    }
    return 0;

}