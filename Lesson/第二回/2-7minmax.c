#include <stdio.h>
int main(){
  int num;
  printf("®”‚Í‰½ŒÂ:");
  scanf("%d",&num);

  int sum=0,max=0;
  int tmp;
  printf("No.1:");
  scanf("%d",&tmp);
  int min=tmp;
  if(tmp>max){
    max=tmp;
  }
  if(tmp<min){
    min=tmp;
  }
  sum+=tmp;
  for(int i=2;i<=num;i++){

    printf("No.%d:",i);
    scanf("%d",&tmp);
    if(tmp>max){
      max=tmp;
    }
    if(tmp<min){
      min=tmp;
    }
    sum+=tmp;
  }
  printf("Sum:%d",sum);
  printf("Average:%.2f",(double)sum/num);
  printf("Max:%d",max);
  printf("Min:%d",min);
}