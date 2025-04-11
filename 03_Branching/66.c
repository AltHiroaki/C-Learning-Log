//読み込んだ整数値を３で割った剰余を表示（switch文）
#include <stdio.h>
int main(void){
    int a;
    printf("読み込んだ整数値を３で割った剰余を表示するよ");
    scanf("%d",&a);
    switch(a % 3){               //a%3が
    case 0 :printf("3で割り切れます");break;     //0であれば
    case 1 :printf("1余ります");break;          //1であれば
    case 2 :printf("2余ります");break;           //2であれば
    }
    return 0;
}