#include<stdio.h>
int main(){
	float a,b,c,d;
	printf("enter farenheat:");
	scanf("%f",&a);
	b=(a-32)*0.55;
	printf("%f`C is in celcius\n",b);
	printf("enter celcius:");
	scanf("%f",&c);
	d=(c/0.55)+32;
	printf("%f`F is in farenheat\n",d);
}
