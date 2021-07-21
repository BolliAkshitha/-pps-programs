#include<stdio.h>
int main()
{
	int l,cm,m,km;
	printf("\n enter l:");
	scanf("%d",&l);
	m = (l/100);
	km = (l/1000*100);
	printf("%d,%d",m,km);
	return 0;
}
