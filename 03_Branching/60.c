//読み込んだ二つの整数値の大きい方と小さいほうの値を求めて表示
#include <stdio.h>
int main(void){
    int a,b;
    printf("二つの整数値を入力してください.");
    printf("まずは整数aを入力してください:\n");
    scanf("%d",&a);
    printf("次に整数bを入力してください:");
    scanf("%d",&b);
    int max,min;
    if (a>b){
        max=a;min=b;
    }else{
        max=b;min=a;
    }
    printf("大きい方の値は%dデス",max);
    printf("小さい方の値は%dデス",min);

}