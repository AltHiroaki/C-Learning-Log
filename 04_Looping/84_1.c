//�ǂݍ��񂾐����l���J�E���g�_�E���i���̂Q�j
//�ǉ������@0�ł͂Ȃ��P�܂ŃJ�E���g�_�E��
//          ���͂��ꂽ�l���O�ȉ��ł���Ƃ��ɂ́A���s���s��Ȃ�
#include <stdio.h>
int main(void){
    int no;
    printf("���̐�������͂���B");
    scanf("%d",&no);
    if(no>=0){
    while (no>=1)
    {
        printf("%d ",no--);
    }
    printf("\n");
    }else{}
    return 0;
}