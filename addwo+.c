#include<stdio.h>

int main(){
	int a,b,i;
	printf("enter two num:");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++){
		a++;
	}
	printf("sum is %d",a);
}
