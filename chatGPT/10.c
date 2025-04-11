#include <stdio.h>
int triangle_area(int base,int height){
    int x;
    x=(base*height)/2;
    return x;
}
int main(){
    int h,b;
    printf("三角形の底辺を入力してください:");scanf("%d",&b);
    printf("三角形の高さを入力してください:");scanf("%d",&h);
    printf("三角形の面積は%dです。",triangle_area(b,h));
    
}