//�R�̒l�@�R�̒l�͐������@�Q�̒l���������@�R�̒l�͈قȂ�
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("�R�Â̒l���r���Ĉ�v������̂��o�͂��܂�\n");
    printf("����a:");scanf("%d",&a);    
    printf("����b:");scanf("%d",&b);
    printf("����c:");scanf("%d",&c);
    if(a==b && b==c)
    printf("3�Â̒l����v���Ă��܂��B");
    else if ( a==b || b==c || c==a ){
        printf("2�Â̐�������v���Ă��܂��B");
    }
    else{
        printf("�ǂ����v���Ă��܂���B");
    }
    return 0;
}