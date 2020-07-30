#include <stdio.h>
#include <math.h>

int    main(void)
{
	int     x1,x2,y1,y2,r1,r2;
	int     T;
	double  distanse, subtract;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d,%d,%d,%d,%d,%d", &x1,&y1,&x2,
				&y2,&r1,&r2);

		distanse = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		subtract = r1 > r2 ? r1 - r2 : r2 - r1;

		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1");
		else if (r1 + r2 > distanse && subtract < distanse)
			printf("2");
		else if (subtract == distanse || r1 + r2 == distanse)
			printf("1");
		else
			printf("0");
	}

	return (0);
}
