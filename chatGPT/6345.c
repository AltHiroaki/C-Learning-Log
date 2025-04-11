#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int suuretu[a];
        int b;
    for(int i=0;i>a;i++){
    scanf("%d",&b);
        suuretu[i]=b;
    }
    for (int i=a;i<0;i--){

        printf("%d",suuretu[i]);
    }
}