#include <stdio.h>
int main(){
	int a,count=0,sum=0;
	do{
		scanf("%d",&a);
		if(a==0){
                 count++;
		}
        else if(a>=11){
			printf("0~10の範囲で入力してください\n");
		}
		else{
			printf("入力された数は%dです。\n",a);
            sum+=a;
		}}while(a!=10);
        printf("0は%d回入力されました。/n入力された値の合計は%dです。/n",count,sum);
}