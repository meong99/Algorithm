#include <stdio.h>

double fix(double *res, double max, int index)
{
	double sum = 0;
	for (int i = 0; i < index; i++)
	{
		res[i] = res[i] / max * 100;
		sum += res[i];
	}
	return (sum);
}

int main(void)
{
	int test;
	int max = 0;
	double sum = 0;

	scanf("%d", &test);
	double res[test];
	for (int i = 0; i < test; i++)
	{
		scanf("%lf", &res[i]);
		if (max < res[i])
			max = res[i];
	}
	sum = fix(res, max, test);
	printf("%lf", sum / test);
}


