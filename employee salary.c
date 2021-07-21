#include<stdio.h>
int main()
{
	int emp_id,hrs;
	float tot_salary,amount_per_hrs;
	printf("enter emp_id:");
	scanf("%d",&emp_id);
	printf("number of working hrs:");
	scanf("%d",&hrs);
	printf("amount received per hrs;");
	scanf("%f",&amount_per_hrs);
	tot_salary =(hrs*amount_Per_hrs);
	printf("\n employee_id = %d,\n total_salary = %f",emp_id,tot_salary);
	return 0;
}
