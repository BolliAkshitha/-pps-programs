#include<stdio.h>
int main()
{
	int temperature,c;
	printf("\n enter temperature:");
	scanf("%d",&temperature);
	c = ((temperature-32)*5/9);
	printf("%d",&c);
	return 0;
}
