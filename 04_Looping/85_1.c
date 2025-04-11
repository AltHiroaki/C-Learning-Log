//85.cをoからではなく１からカウントアップする
//入力された値が0以下であるときは、開業を行わない
#include <stdio.h>
int main(void){
    int no;
    int cnt=1;
    printf("整数を入力するんだな:");scanf("%d",&no);
    if(no>=0){
        while (cnt<=no)
        {
            printf("%d ",cnt++);
        }
        
    }else{}
    return 0;
}