#include<stdio.h>
int main()
{
	int weight,cost,number,totalweight,totalcost;
	printf("\n enter weight:");
	scanf("%d",&weight);
	printf("\n enter cost:");
	scanf("%d",&cost);
	printf("\n enter number:");
	scanf("%d",&number);
	totalweight = (weight*number);
	totalcost = (cost*number);
	printf("%d,%d",totalweight,totalcost);
	return 0;
}
