#include<stdio.h>
int main()
{
	char op;
	double a,b;
	printf("Enter an operrator(+),(-),(*),(/) :");
	scanf("%c",&op);
	printf("Enter the value of a:");
	scanf("%lf",&a);
	printf("Enter the value of b:");
	scanf("%lf",&b);
	switch(op)
	{
		case'+':
			printf("%lf + %lf = %lf",a,b,a+b);
			break;
		case'-':
			printf("%lf - %lf = %lf",a,b,a-b);
			break;
		case'*':
			printf("%lf * %lf = %lf",a,b,a*b);
			break;
		case'/':
			printf("%lf / %lf = %lf",a,b,a/b);
			break;
	}
	return 0;
}
