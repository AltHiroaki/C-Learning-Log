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
    printf("1����n�܂ł̍��v��\�������Ⴄ��I");
    printf("n:");scanf("%d",&n);
    printf("���v:%d",sum(n));
}