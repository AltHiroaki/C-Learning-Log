#include <stdio.h>
int main(){
  int k;
  scanf("%d",&k);
  for(int i=1;i<=k;i++){

    for(int j=1;j<=i-1;j++) {
      printf(" ");
    }
    for(int j=1;j<=k-i+1;j++) {
      printf("*");
    }
    printf("\n");
  }
}