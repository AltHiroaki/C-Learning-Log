#include <stdio.h>
int main(void){
    int numbers[3][4];
    int i,j;
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
        printf("%d�s%d��̐��l�����:",i+1,j+1);
        scanf("%d",&numbers[i][j]);
    }}
    //�ő�l�����߂�
    int max=numbers[0][0],min=numbers[0][0];
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(max<numbers[i][j])
            max=numbers[i][j];
            }
        }
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(min>numbers[i][j])
            min=numbers[i][j];
            }
        }
        printf("�ő�l��%d�ŁA�ŏ��l��%d�ł��B",max,min);
}