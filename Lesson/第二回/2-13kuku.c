#include <stdio.h>
int main(){
	for(int i=9;i>=1;i--){
		for(int j=9;j>=1;j--){
            if (i*j<10) {
	            break;
            }
			printf("%d ",i*j);

		}
		printf("\n");
	}
}