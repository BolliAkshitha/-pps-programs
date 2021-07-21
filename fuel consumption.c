#include<stdio.h>
int main()
{
	int x;
	float y,avgconsumption;
	printf("\n total distance in km:");
	scanf("%d",&x);
	printf("\n total fuel spent in liters");
	scanf("%f",&y);
	avgconsumption = x/y;
	printf("\n avgconsumption=%f",avgconsumption);
	return 0;
}
