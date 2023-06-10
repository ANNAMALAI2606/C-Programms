#include<stdio.h>
int main(){
	int a,i,b,c;
	printf("enter num:");
	scanf("%d",&a);
	for(i=1;i<=a/2;i++){
		b=a%i;
		c=i;
		if(b==0){
			printf("%d is a prime number factor\n",c);
		}
	}
}
