//59.c��if���Łi��̐����l�̍����o���j
#include <stdio.h>
int main(void){
    int a,b;
    printf("��̐����l����͂���B");
    printf("����a:");scanf("%d",&a);
    printf("����b:");scanf("%d",&b);
    if (a>b)
     printf("��̐����l�̍���%d�ł�",a-b);
    else
     printf("��̐����l�̍���%d�ł�",b-a);
    return 0;
}