#include <stdio.h>
int main(){
  int n,factorial=1;
  scanf("%d",&n);
  for (int i = n; i >= 1; i--){
    factorial *= i;
  }
  printf("%d",factorial);
  return 0;
}