#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int base, exponent, i;
	int Ans=1;

	printf("請輸入底數:");
	scanf_s("%d", &base);

	printf("請輸入指數:");
	scanf_s("%d", &exponent);

	if (exponent >= 0)
	{
		for (i = 1; i <= exponent; i++)
		{
			Ans = Ans * base;
		}
		printf("%d的%d次方等於%d\n", base, exponent, Ans);
	}
	else
	{
		for (i = 1; i <= abs(exponent); i++)
		{
			Ans = Ans * base;
		}
		printf("%d的%d次方等於1/%d\n", base, exponent, Ans);
	};

	system("pause");
	return 0;
}