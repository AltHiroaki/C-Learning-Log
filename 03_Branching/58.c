//読み込んだ二つの整数値の大きい方の値を表示
#include <stdio.h>
int main(void){
    int a,b;
    printf("数値を入力してください:");scanf("%d",&a); 
    printf("数値を入力してください:");scanf("%d",&b);
    if (a>b)
     printf("%d",a);
    else
     printf("数値が大きいのはbでした%d",b);
    return 0;
}