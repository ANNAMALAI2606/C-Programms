#include<stdio.h>

int main(){
	int a,b=0,i,r;
	printf("enter num:");
	scanf("%d",&a);
	for(i=1;i<=a/2;i++){
		r=a%i;
		if(r==0){
			b+=i;
		}
	}
	if(a==b){
		printf("%d is perfect number",a);	
	}
	else{
		printf("%d is not a perfect number",a);
	}
	
}
