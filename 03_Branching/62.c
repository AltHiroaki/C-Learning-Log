//読み込んだ月の季節を表示
#include <stdio.h>
int main(void){
    int month;
    printf("月を入力してください:");
    scanf("%d",&month);
    if (month>=3 && month<=5){
        printf("入力した月の季節は春ですね");
    }
    else if (month>=6 && month<=8){
        printf("入力した月の季節は夏ですね");
    }
    else if (month>=9 && month<=11){
        printf("入力した月の季節は秋ですね");
    }
    else if (month==12 || month==1 || month==2){
        printf("入力した月の季節は冬ですね");
    }
    else{
        printf("入力された月は存在しません。");
    }
    return 0;
}