//2つの変数の値を入れ替える関数を作成
#include <stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(void){
    int a,b;
    printf("a:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    printf("交換前のa:%db:%d\n",a,b);
    swap(&a,&b);
    
    printf("交換後のa:%db:%d",a,b);
}