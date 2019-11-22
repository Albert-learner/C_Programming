#include <stdio.h>

int main(void)
{
	int i, j;
	int sum = 0;
	printf("두 정수 입력: ");
	scanf("%d %d", &i, &j);

	for (int k = i; k < j+1; k++)
	{
		sum += k;
	}
	printf("합계: %d\n", sum);
	return 0;
}