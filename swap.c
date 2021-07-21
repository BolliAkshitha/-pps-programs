#include<stdio.h>
int main()
{
	int x1,x2,n;
	printf("\n enter x1,x2:");
	scanf("%d%d",&x1,&x2);
	n = ((x1=x2),(x2=x1));
	printf("%d",n);
	return 0;
}
