#include <stdio.h>
int main(){
  int k;
  scanf("%d",&k);
  for(int i=k;i>=1;i--){
    if(i%2==1){
      printf("%d ",i);
    }
  }
  return 0;
}