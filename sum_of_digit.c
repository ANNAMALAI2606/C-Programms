#include<stdio.h>
int main(){
	int a,b=0;
	printf("enter num:");
	scanf("%d",&a);
	while(a!=0){
		b=b+a%10;
		a=a/10;
	}
	printf("sum is %d",b);
}
