#include<stdio.h>

int main(){
	int a,i,crit=0;
	printf("enter num: ");
	scanf("%d",&a);
	for(i=2;i<=a;i++){
		if(a%i==0){
			crit=crit+1;
		}
	
	}
    if(crit==1)
    {
    	printf("%d is a prime number",a);
	}
	else
	{
	  printf("%d is not a prime number",a);
	}
	
	}
	
