//2‚Â‚Ì•Ï”‚Ì’l‚ğ“ü‚ê‘Ö‚¦‚éŠÖ”‚ğì¬
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
    printf("ŒğŠ·‘O‚Ìa:%db:%d\n",a,b);
    swap(&a,&b);
    
    printf("ŒğŠ·Œã‚Ìa:%db:%d",a,b);
}