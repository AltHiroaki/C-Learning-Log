//３つの値　３つの値は正しい　２つの値が正しい　３つの値は異なる
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("３津の値を比較して一致するものを出力します\n");
    printf("整数a:");scanf("%d",&a);    
    printf("整数b:");scanf("%d",&b);
    printf("整数c:");scanf("%d",&c);
    if(a==b && b==c)
    printf("3津の値が一致しています。");
    else if ( a==b || b==c || c==a ){
        printf("2津の整数が一致しています。");
    }
    else{
        printf("どれも一致していません。");
    }
    return 0;
}