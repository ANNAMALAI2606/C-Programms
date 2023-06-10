#include<stdio.h>

int main(){
	int a,r=0,t;
	printf("enter num:");
	scanf("%d",&a);
	t=a;
	while(t!=0){
		r=r*10+t%10;
		t=t/10;
	}
	if(r==a){
		printf("%d is pali",a);
	}
	else{
		printf("%d is not pali",a);
	}
}
