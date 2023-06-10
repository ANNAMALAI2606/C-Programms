#include<stdio.h>

int main(){
	int a,b;
	printf("enter num:");
	scanf("%d",&a);
	while(a!=0){
		a=a%10;
		if(a!=0 && a!=1){
			printf("it is not a binary");
		}
		else if(a==0 || a==1){
			printf("it is a binary");
		}
		a=a/10;
	}
}
