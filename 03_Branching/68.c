//swich文の動作を確認するプログラム
#include <stdio.h>
int main(void){
    printf("整数A:");
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:printf("A");printf("B");break;
        case 2:printf("C");
        case 3:break;
        case 4:break;
        case 5:break;
        case 6:break;
        case 7:break;
        default :break;
    }
}