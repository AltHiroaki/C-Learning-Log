//指示された戸数だけ整数を読み込んで合計値と平均値を表示
#include <stdio.h>
int main(void){
    int no=0;
    printf("個数を入力してください。:");scanf("%d",&no);
    int a=0;
    int sum=0;
    while(a<no)
    {
        int y;
        printf("No.%d:",++a);
        scanf("%d",&y);
        sum=sum+y;

    }
    printf("合計は%dで、",sum);
    printf("平均は%.2fです",(double)sum/no);
}