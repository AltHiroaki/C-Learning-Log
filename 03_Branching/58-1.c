//条件演算子でp58を表現
#include <stdio.h>
int main(void){
    int a,b;
    printf("数値を入力してください:");scanf("%d",&a); 
    printf("数値を入力してください:");scanf("%d",&b);
    int max= a>b ? a:b;
    printf("二つの整数のほうで大きいのは%dでした。",max);
    return 0;
}