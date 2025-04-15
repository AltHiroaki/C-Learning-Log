#include <stdio.h>
int main(){
  int a[10],sum=0,max=0;
  for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    if (a[i]>100) {
      i--;
      continue;
    }
      if(a[i]>max){
        max=a[i];
    }
    sum+=a[i];
  }

  printf("Average: %.1f\n",(double)sum/10);
  printf("Highest: %d",max);
}