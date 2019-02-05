#include "pch.h"
#include "stdio.h"

void main()
{
	int hoursWorked = 0;
	float basicRate = 25.00;
	float pay = 0.0;
	float overTimeRate = 30.00;

	printf("Enter hours worked: ");
	scanf_s("%d", &hoursWorked);

	if (hoursWorked <= 40)
	{
		pay = hoursWorked * basicRate;
	}
	else
	{
		pay = 40 * basicRate + (hoursWorked - 40)*overTimeRate;
	}

	printf("You worked %d hours and earned %.2f \n", hoursWorked, pay);
}