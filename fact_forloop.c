#include<stdio.h>
void main() {
  int a,i,f=1;
  printf("Enter the value : ");
  scanf("%d", &a);
  for (i = 1; i <= a; i++) {
  	f=f*i;
  }
  printf("factorial of %d! is equal to %d", a,f);
}
