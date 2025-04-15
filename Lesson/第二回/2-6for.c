#include <stdio.h>
int main(){
	int a,count=0;
	printf("Enter number:");
	scanf("%d",&a);
    for (int i=0;i<a*2;i++) {
	putchar('+');
	count++;
	}
}