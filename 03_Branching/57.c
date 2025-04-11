//読み込んだ３つの整数値の最大値を求めて表示
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("３つの整数を入力して比較します。");
    printf("整数a:");scanf("%d",&a);    
    printf("整数b:");scanf("%d",&b);
    printf("整数c:");scanf("%d",&c);
    int max=a;
    if(b>max) 
     max=b;
    if(c>max)
     max=c;
    printf("最大値は%dでし",max);
    return 0;

}