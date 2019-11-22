#include <stdio.h>

int main()
{
	int n;
	int fac = 1;
	printf("정수 입력: ");
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
	{
		fac *= i;
	}
	printf("모든 값의 곱: %d\n", fac);
	return 0;
}