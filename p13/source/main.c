#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

double power(double, int);

void main(void)
{
	int k;
	double ans;
	printf("Ӌ��3.5��k�η�?Ոݔ��k=");
	scanf("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d�η�=%f\n", k, ans);
	system("pause");
}

double power(double x, int n)
{
	int i;
	double powerxn = 1;
	for (i = 1; i <= n; i++)
	{
		powerxn = powerxn * x;
	}
	return powerxn;
}