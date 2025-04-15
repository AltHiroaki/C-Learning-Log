#include <stdio.h>
int main(){
  int a;
  printf("Enter number:");
  scanf("%d",&a);
  while (a>=21 || a<=9){
    printf("もう一度入力してください:\n");
    scanf("%d",&a);
  }
  while (a>=0) {
    printf("%d ",a);
    a-=2;
  }
}