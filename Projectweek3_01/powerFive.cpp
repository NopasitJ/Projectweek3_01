#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int power_sum(int num);
int main()
{
	int sum = 0;
	for (int i = 2; i < 355000; i++)
	{
		if (power_sum(i) == i)
		{
			sum += i;
		}
	}
	printf("%d ", sum);
	return 0;
}
int power_sum(int num)
{
	int sum = 0;
	while (num > 0)
	{
		int a = num % 10;
		sum += pow(a, 5);
		num /= 10;
	}
	return sum;
}