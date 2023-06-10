#include<stdio.h>

int main(){
	int a,b,c=0,d=1,i;
	printf("enter limit: ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		if(i<=1){
			b=i;
		}
		else{
			b=c+d;
			c=d;
			d=b;
			
		}
		printf("%d ,",b);
	
	}
   
	return 0;
}
	
