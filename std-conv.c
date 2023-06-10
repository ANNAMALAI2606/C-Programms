#include<stdio.h>
int main(){
	float a,b,c,d,e;
	printf("enter km:\n");
	scanf("%f",&a);
	b=a*1000;
	printf("%f is in meter\n",b);
	c=b*100;
	printf("%f is in cm\n",c);
	d=c/2.54;
	printf("%f is in inches\n",d);
	e=d/12;
	printf("%f is in feet\n",e);
}
/*
1km=1000m
1m=100cm
2.54cm=1inch
1feet=12inch
*/
