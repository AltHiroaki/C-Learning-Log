#include <stdio.h>
int triangle_area(int base,int height){
    int x;
    x=(base*height)/2;
    return x;
}
int main(){
    int h,b;
    printf("�O�p�`�̒�ӂ���͂��Ă�������:");scanf("%d",&b);
    printf("�O�p�`�̍�������͂��Ă�������:");scanf("%d",&h);
    printf("�O�p�`�̖ʐς�%d�ł��B",triangle_area(b,h));
    
}