//問題: 数値が偶数か奇数かを判定する関数
#include <stdio.h>
int super(int x1){
    int k,g;
    k=奇数;
    g=偶数;
    switch (x1%2)
    {
    case 0:return g
        break;
    
    default: return k
        break;
    }
}
int main(void){
    int a;
    printf("1つの整数を入力して見せよ。");
    printf("整数a:");scanf("%d",&a);
    if(super(x1)=0){
        printf("この数は偶数です！");
    }else{
        printf("コノカズハキスウデス");
    }
    return 0;
}