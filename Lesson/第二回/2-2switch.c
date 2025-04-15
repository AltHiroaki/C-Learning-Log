#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  switch(a%2){
    case 0:
      printf("aは偶数です");
      break;
    case 1:
      printf("aは奇数です");
      break;
  }
}