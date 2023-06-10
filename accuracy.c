#include<stdio.h>

int main(){
	float a,b,c,d,e;
	lable:
	printf("enter actual & predicted value:\n");
	scanf("%f%f",&a,&b);
	if(a>b){
	c=((a-b)/a)*100;
	printf("%0.2f is predicted error\n",c);
	d=100-c;
	printf("%0.2f is accuracy percentage\n",d);
	printf("if you want to continue press 1:\n");
	scanf("%f",&e);
	if(e==1){
		goto lable;
	}
	else{
		printf("thank you...\n");
	}
}
else{
	c=((b-a)/b)*100;
	printf("%0.2f is predicted error\n",c);
	d=100-c;
	printf("%0.2f is accuracy percentage\n",d);
	printf("if you want to continue press 1:\n");
	scanf("%f",&e);
	if(e==1){
		goto lable;
	}
	else{
		printf("thank you...\n");
	}
}
}
