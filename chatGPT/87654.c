//2�̕ϐ��̒l�����ւ���֐����쐬
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
    printf("�����O��a:%db:%d\n",a,b);
    swap(&a,&b);
    
    printf("�������a:%db:%d",a,b);
}