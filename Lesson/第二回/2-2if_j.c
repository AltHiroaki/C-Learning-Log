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
  printf("3•Ï”‚Ì’†‚É3‚Ì”{”‚Í%dŒÂŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·B",count);
}