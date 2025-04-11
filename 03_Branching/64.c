//二つの整数値を読み込み、二つの差が１０以下と１１以上で出力すっる。 
#include <stdio.h>
int main(void){
    int a,b;
    printf("整数値を二つ読み込みたい。\n");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    int index;
    index=a-b;
    if(index<=10){
        printf("二つの整数値の差は１０以下で、%dである。",index);
    }else{
        printf("二つの整数値の差は１０以上で、%dである。",index);
    }
    return 0;
}