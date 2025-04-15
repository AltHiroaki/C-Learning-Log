#include <stdio.h>
int main(){
  int a;
  printf("Your Age:");
  scanf("%d",&a);
  printf("あなたは%dカ月以上生きています。\n",a*12);
  return 0;
}