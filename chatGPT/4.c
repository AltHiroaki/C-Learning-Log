#include <stdio.h>

int main() {
    int numbers[5];
    for(int i=0;i<5;i++){
        printf("数字を入れてね！%d番目:",i+1);
        scanf("%d",&numbers[i]);
        }
    for(int i=4;i>=0;i--){
        printf("%d ",numbers[i]);
    }


    return 0;
}