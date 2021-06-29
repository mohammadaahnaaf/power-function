#include<stdio.h>
void main()
{
	int x, y;
	double power(int, int);

	printf("Enter value\n");
	scanf_s("%d", &x);
	printf("Enter power\n");
	scanf_s("%d", &y);
	printf("%d to power of %d = %.2f\n", x, y, power(x, y));
}
double power(int x, int y);
double power(int x, int y)
{
	double p;
	p = 1.0;

	if (y >= 0)
		while (y--)
			p *= x;
	else
		while (y++)
			p /= x;
	return(p);
}