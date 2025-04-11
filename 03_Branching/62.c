//“Ç‚İ‚ñ‚¾Œ‚Ì‹Gß‚ğ•\¦
#include <stdio.h>
int main(void){
    int month;
    printf("Œ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d",&month);
    if (month>=3 && month<=5){
        printf("“ü—Í‚µ‚½Œ‚Ì‹Gß‚Ít‚Å‚·‚Ë");
    }
    else if (month>=6 && month<=8){
        printf("“ü—Í‚µ‚½Œ‚Ì‹Gß‚Í‰Ä‚Å‚·‚Ë");
    }
    else if (month>=9 && month<=11){
        printf("“ü—Í‚µ‚½Œ‚Ì‹Gß‚ÍH‚Å‚·‚Ë");
    }
    else if (month==12 || month==1 || month==2){
        printf("“ü—Í‚µ‚½Œ‚Ì‹Gß‚Í“~‚Å‚·‚Ë");
    }
    else{
        printf("“ü—Í‚³‚ê‚½Œ‚Í‘¶İ‚µ‚Ü‚¹‚ñB");
    }
    return 0;
}