//85.c��o����ł͂Ȃ��P����J�E���g�A�b�v����
//���͂��ꂽ�l��0�ȉ��ł���Ƃ��́A�J�Ƃ��s��Ȃ�
#include <stdio.h>
int main(void){
    int no;
    int cnt=1;
    printf("��������͂���񂾂�:");scanf("%d",&no);
    if(no>=0){
        while (cnt<=no)
        {
            printf("%d ",cnt++);
        }
        
    }else{}
    return 0;
}