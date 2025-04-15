#include <stdio.h>
int main(){
  int a;
  do{
    scanf("%d",&a);
    if(a>=11){
      printf("0~10の範囲で入力してください\n");
      }
    else{
    printf("入力された数は%dです。\n",a);
    }}while(a!=10);
}