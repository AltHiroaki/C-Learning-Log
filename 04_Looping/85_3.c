#include <stdio.h>
int main(void){
    int no;
    int cnt=2;
    printf("��������͔���:");scanf("%d",&no);
    while (cnt<=no)
    {
        printf("%d ",cnt);
        cnt=cnt*2;
    }
    return 0;
}