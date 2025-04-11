//練習2: 関数 swap を作成し、2つの整数の値を交換するプログラムを書いてみてください（ポインタを使います）。
#include <stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(void){
    int x1,x2;
    printf("入力してくれた数を逆にしちゃうよーん\n");
    printf("整数x1:");scanf("%d",&x1);
    printf("整数x2:");scanf("%d",&x2);
    swap(&x1,&x2);
    printf("逆にすると...整数x1:%d,整数x2:%dになっちゃいました！",x1,x2);
    return 0;
}