#include <stdio.h>

int main(void)
{
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);

	switch (n/10)
	{
	case 1:
		printf("0이상 10미만\n");
		break;
	case 2:
		printf("10이상 20미만\n");
		break;
	case 3:
		printf("20이상 30미만\n");
		break;
	default:
		printf("30이상\n");
	}
	return 0;
}