//�J�E���g�A�b�v�@�����������̂�
#include <stdio.h>
int main(void){
    int no;
    int cnt=1;
    printf("��������͔���:");scanf("%d",&no);
    while (cnt<=no)
    {
        if(cnt%2){cnt++;}else{
         printf("%d" ,cnt);
        cnt++;}
    }
    return 0;
}