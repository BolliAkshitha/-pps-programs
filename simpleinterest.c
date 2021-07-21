#include<stdio.h>
int main()
{
	float p,t,r,SI;
	printf("\n enter p:");
	scanf("%f",&p);
	printf("\n enter t:");
	scanf("%f",&t);
	printf("\n enter r :");
	scanf("%f",&r);
	SI = (p*t*r/100);
	printf("SI = %f", SI);
	return 0;
}
