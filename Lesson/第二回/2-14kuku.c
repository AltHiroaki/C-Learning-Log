#include <stdio.h>
int main(){
	int x,y;
	for(int i=9;i>=1;i--){
		for(int j=9;j>=1;j--){
			// x=i*j//10‚ğo‚µ‚Ä‚©‚çi*j-x*10‚µ‚½‚çˆê‚ÌˆÊ‚Å‚é‚µA10‚ÌˆÊo‚é
			x=i*j/10;
			y=i*j-x*10;
			if (x==4||x==6||y==4||y==6) {
				continue;
			}
			printf("%d ",i*j);
		}
		printf("\n");
	}
}