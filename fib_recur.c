#include<stdio.h>
int fib(int);
int main(){
	int a,i;
	printf("enter limit: ");
	scanf("%d",&a);
	for(i=0;i<a;i++){	
		printf("%d ,",fib(i));
	
	}
	
}
int fib(int i){
	if(i==0){
		return 0;
	}
		
	else if(i==1){
		return 1;
	}
		
	else{
		return(fib(i-1)+fib(i-2));
	}
		
}
	
