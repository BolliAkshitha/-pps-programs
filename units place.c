#include<stdio.h>
int main()
{
	int num,digit;
	printf("enter num:");
	scanf("%d",&num);
	digit = num%10;
	printf("ones place digit = %d",digit);
	return 0;
}
