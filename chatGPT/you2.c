#include <stdio.h>
int subaru2(int x,int y){
    int sum=0;
    for(int i=0;i<y;i++){
        sum+=x;
    }
    return sum;
}
int main(void){
    int a,count;
    printf("a��count�񑫂��܂�!");
    printf("a:");scanf("%d",&a);
    printf("count:");scanf("%d",&count);
    printf("a��count�񑫂����z��%d�ł��I",subaru2(a,count));
    }