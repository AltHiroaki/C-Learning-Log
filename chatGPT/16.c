#include <stdio.h>
int main(void){
    int numbers[3][4];
    int i,j;
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
        printf("%d行%d列の数値を入力:",i+1,j+1);
        scanf("%d",&numbers[i][j]);
        }
    }
    int sum=0;
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            sum=sum+numbers[i][j];
        }
    }
    float ave=(float)sum/12;
    int count=0;
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(ave<numbers[i][j]){
                count++;
            }
        }
    }
    printf("平均値は%0.2fで、要素の個数は%dです。",ave,count);
    return 0;

}