#include <stdio.h>
int main(void){
    int numbers[3][4];
    int i,j;
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
        printf("%d行%d列の数値を入力:",i+1,j+1);
        scanf("%d",&numbers[i][j]);
    }}
    //最大値を求める
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
        printf("最大値は%dで、最小値は%dです。",max,min);
}