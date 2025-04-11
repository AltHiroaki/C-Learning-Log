#include <stdio.h>
int sum(int n){
    if(n==0){
        return 1;
    }else if(n>0){
        return n*sum(n-1);
        
    }
}
int main(){
    int n;
    printf("1からnまでの合計を表示しちゃうよ！");
    printf("n:");scanf("%d",&n);
    printf("合計:%d",sum(n));
}