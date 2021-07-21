#include<stdio.h>
int main()
{
	int num1,num2,num3,sum,product,avg;
	printf("\n enter num1,num2,num3:");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	sum = (num1+num2+num3);
	printf("\n sum %d:",sum);
	product = (num1*num2*num3);
	printf("\n product %d:",product);
	avg = ((num1+num2+num3)/3);
	printf("\n avg %d:",avg);
	return 0;
}
