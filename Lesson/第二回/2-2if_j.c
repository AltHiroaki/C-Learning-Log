#include <stdio.h>
int main(){
  int a,b,c,count=0;
  scanf("%d %d %d",&a,&b,&c);
  if(a%3==0){
    count++;
  }
  if(b%3==0){
    count++;
  }
  if(c%3==0){
    count++;
  }
  printf("3変数の中に3の倍数は%d個含まれています。",count);
}