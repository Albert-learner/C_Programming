#include <stdio.h>

int main()
{
	int total = 0, num;

	printf("정수 입력: ");
	scanf("%d", &num);
	total += num; // 더해줘야지 값이 나오지!!!!!!!

	while (num != 0)
	{
		printf("정수 입력: ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d\n", total);
	return 0;
}