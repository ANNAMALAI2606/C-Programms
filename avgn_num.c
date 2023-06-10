#include<stdio.h>
void main() {
  int n, i;
  float num, average, sum = 0;
  printf("Enter the value of n:");
  scanf("%d", & n);
  for (i = 1; i <= n; i++) {
    printf("Enter the %d number: ", i);
    scanf("%f", & num);
    sum += num;
  }
  average = sum / n;
  printf("\nTotal Average is = %0.2f\n ", average);
}
