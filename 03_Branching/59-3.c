//59-2���������Z�q�ł���Ă݂悤
#include <stdio.h>
int main(void){
    int a,b,c;
    printf("�����l���R���͂��Ă��������B");
    printf("����a����͂��Ă�������:");scanf("%d",&a);
    printf("����b����͂��Ă�������:");scanf("%d",&b);
    printf("����c����͂��Ă�������:");scanf("%d",&c);
    int min=a<b ? a:b;
    if (min>c)
     min=c;
    printf("�R�̐����l��%d�ł��B",min);

}