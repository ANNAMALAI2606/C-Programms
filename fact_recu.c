#include<stdio.h>

int fact(int a){

	if(a==0){
		return 1;	
	}
	else{
		return a*fact(a-1);
	}

}

int main(){
	int a,b;
	printf("enter num:");
	scanf("%d",&a);
	printf("factorial of %d is %d",a,fact(a));
}
