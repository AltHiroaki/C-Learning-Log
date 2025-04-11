//読み込んだ整数値は奇数であるか偶数であるか
#include <stdio.h>
int main(void){
    int a;
    printf("整数値を入力してください。整数値が奇数であるか偶数であるか判定します。");scanf("%d",&a);
    switch(a%2){
        case 0:printf("偶数である。");break;
        case 1:printf("奇数である。");break;
    }
    return 0;
}