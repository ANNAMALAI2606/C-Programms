#include<stdio.h>

int main(){
	int a,i=1,f=1;
	printf("enter num:");
	scanf("%d",&a);
	while(i<=a){
		f=f*i;
		i++;
	}
	printf("factorial of %d! is %d",a,f);
}
