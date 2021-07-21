#include<stdio.h>
int main()
{
	int hours,minutes,seconds;
	printf("\n enter seconds:");
	scanf("%d",&seconds);
	hours = (seconds/60*60);
	printf("%d",hours);
	minutes = (seconds/60);
	printf("%d",minutes);
	return 0;	
}
