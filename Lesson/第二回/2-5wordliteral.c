#include <stdio.h>
int main(){
	int a,count=0;
	printf("Enter number:");
	scanf("%d",&a);
	while (a>=21 || a<=9){
		printf("‚à‚¤ˆê“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:\n");
		scanf("%d",&a);
	}
	while (count<a*2) {
		putchar('+');
		count++;
	}
}