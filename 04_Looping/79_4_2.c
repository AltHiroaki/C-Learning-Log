#include <stdio.h>
int main(void){
    
    int x,y;
    int sum=0;
    int cnt=0;
    printf("“ñ‚Â‚Ì®”‚ğ“ü—Í‚¹‚æB");
    printf("®”a:");scanf("%d",&x);
    printf("®”b:");scanf("%d",&y);
    do
    {
        sum=sum+x;
        cnt=cnt+1;
        x=x+cnt;
    } while (
        cnt>x-y
    );
    printf("xˆÈãyˆÈ‰º‚Ì‘S®”‚Ì˜a‚Í%d‚Å‚·B",sum);
    return 0;
}