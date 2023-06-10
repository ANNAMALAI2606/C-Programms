#include<stdio.h>
void main() {
  int i = 0, n, temp, temp1 = 1;
  printf("Please give input a number: ");
  scanf("%d",&n);
  printf("Prime numbers Upto %d are \n",n);
  while (temp1<=n) {
    temp = 0;
    for (i=2;i<=(temp1/2); i++) {
      if (temp1%i==0) {
        temp = 1;
        break;
      }
    }
    if (temp == 0)
      printf("%d \n",temp1);
    temp1++;
  }
}
/*
#include<stdio.h>

int main(){
	int i,a,t,t1=1;
	printf("enter num:");
	scanf("%d",&a);
	while(t1<=a){
		t=0;
		for(i=2;i=(t1/2);i++){
			if(t1%i==0){
				t=1;
				break;
			}
		}
		if(t==0){
			printf("%d\n",t1);
		}
	t1++;
	}
} */
